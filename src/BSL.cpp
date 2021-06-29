
#include "BSL.h"

class wANTLRInputStream : public antlr4::ANTLRInputStream
{
public:
	wANTLRInputStream(const wchar_t* input) : ANTLRInputStream() {
		load(input);
	}

private:
	void load(const wchar_t* input) {
		auto output = std::back_inserter(_data);

		const wchar_t* end = input + wcslen(input);
		while (input < end) {
			wchar_t uc = *input++;
			if (!((uc - 0xd800u) < 2048u)) //is_surrogate
				*output++ = uc;

			else if ((uc & 0xfffffc00) == 0xd800 && input < end && (uc & 0xfffffc00) == 0xdc00)
				*output++ = (uc << 10) + *input++ - 0x35fdc00;
			else
				std::cout << "error" << std::endl;
		}
		p = 0;
	}
};

BSL::BSL() {

    // Full featured property registration example
    AddProperty(L"Version", L"ВерсияКомпоненты", [&]() {
        auto s = std::string(Version);
        return std::make_shared<variant_t>(std::move(s));
    });

    // Method registration.
    // Lambdas as method handlers are not supported.
    AddMethod(L"Parse", L"Разбор", this, &BSL::parse);

	AddMethod(L"Next", L"Следующий", this, &BSL::next);
	AddMethod(L"GetItems", L"ПолучитьЭлементы", this, &BSL::getItems);
	AddMethod(L"IsLexeme", L"ЭтоЛексема", this, &BSL::isLexeme);

	AddMethod(L"Type", L"Тип", this, &BSL::getType);
	AddMethod(L"Text", L"Текст", this, &BSL::getText);

	AddMethod(L"LineNumber", L"НомерСтроки", this, &BSL::getLine);
	AddMethod(L"SymbolNumber", L"НомерСимвола", this, &BSL::getCharPositionInLine);

}

BSL::~BSL() {

	if(parser) parser->~BSLParser();
	if(tokens) tokens->~CommonTokenStream();
	if(lexer) lexer->~BSLLexer();
	if(input) input->~ANTLRInputStream();
	//if(node) node->
}

std::string BSL::extensionName() {
	return "BSL";
}

variant_t BSL::parse(variant_t& value) {
	if (!std::holds_alternative<const wchar_t*>(value))
		return false;

	//input = new antlr4::ANTLRInputStream(std::get<const wchar_t*>(value));
	input = new wANTLRInputStream(std::get<const wchar_t*>(value));
	lexer = new BSLLexer(input);
	tokens = new antlr4::CommonTokenStream(lexer);
	parser = new BSLParser(tokens);
	tree = parser->file();

	position.clear();
	items.push_back(tree);
	position.push_back(-1);
	node = nullptr;

	return true;
};

variant_t BSL::next()
{
	if (!parser || position.empty()) {
		return false;
	
	} else if (position.back() == items.size()-1) {
		position.pop_back();
		switch (position.size()) {
		case 0: {
			node = nullptr;
			return false;
		}case 1: {
			items.clear();
			items.push_back(tree);
			break;
		}default: {
			items = node->parent->parent->children;
			break;
		}
		}
		node = items[position.back()];
		return false;
	}
	else {
		position.back()++;
		node = items[position.back()];
		return true;
	}
}

variant_t BSL::isLexeme() {
	return node && node->children.empty();
}

variant_t BSL::getItems() {

	if (std::get<bool>(BSL::isLexeme()))
		return false;
	else {
		items = node->children;
		node = nullptr;
		position.push_back(-1);
		return true;
	}
}

variant_t BSL::getType() {

	if (!node)
		return -1;
	else if (std::get<bool>(BSL::isLexeme()))
		return (int32_t)((antlr4::tree::TerminalNode*)node)->getSymbol()->getType();
	else
		return (int32_t)((antlr4::RuleContext*)node)->getRuleIndex();
}

variant_t BSL::getText() {

	if (!node)
		return "";

	return node->getText();
}

variant_t BSL::getLine() {

	if (!std::get<bool>(BSL::isLexeme()))
		return -1;

	return (int32_t)((antlr4::tree::TerminalNode*)node)->getSymbol()->getLine();
}

variant_t BSL::getCharPositionInLine() {

	if (!std::get<bool>(BSL::isLexeme()))
		return -1;

	return (int32_t)((antlr4::tree::TerminalNode*)node)->getSymbol()->getCharPositionInLine();
}