
#include "BSL.h"

#define ERROR_TYPE "Type not supported!"
#define ERROR_SOURCE_UNDEFINED "Source undefined!";
#define ERROR_TEXT_ANALYSIS "No analysis text!";
#define ERROR_NOT_BEGIN "Analysis not started!";
#define ERROR_IS_RULE "Not available for lexer!";
#define ERROR_NOT_SELECT_TOKEN "No token selected!";

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
				throw "error load code";
		}
		auto t = _data.c_str();
		p = 0;
	}
};

BSL::BSL() {

    // Full featured property registration example
    AddProperty(L"Version", L"ВерсияКомпоненты", [&]() {return std::make_shared<variant_t>(std::move(std::string(Version)));});
	
	// общие свойства
	AddProperty(L"Type", L"Тип", [&]() {return std::make_shared<variant_t>(std::move(getType())); });
	AddProperty(L"IsLexeme", L"ЭтоЛексема", [&]() {return std::make_shared<variant_t>(std::move(node ? (bool)token : -1)); });

	// свойства токена
	AddProperty(L"Text", L"Текст", [&]() {return std::make_shared<variant_t>(std::move(getText())); });
	
	AddProperty(L"LineNumber", L"НомерСтроки", [&]() {return std::make_shared<variant_t>(std::move(token ? (int32_t)token->getLine() : -1)); });
	AddProperty(L"SymbolNumber", L"НомерСимвола", [&]() {return std::make_shared<variant_t>(std::move(token ? (int32_t)token->getCharPositionInLine() : -1)); });

	// метод старт
	AddMethod(L"Execute", L"Выполнить", this, &BSL::Execute);
	
	// перебор
	AddMethod(L"Next", L"Следующий", this, &BSL::next);

	// методы Дерево
	AddMethod(L"GetItems", L"ПолучитьЭлементы", this, &BSL::getItems);
}

BSL::~BSL() {

	if(parser) parser->~BSLParser();
	if(tokens) tokens->~CommonTokenStream();
	if(lexer) lexer->~BSLLexer();
	if(input) input->~ANTLRInputStream();
}

std::string BSL::extensionName() {
	return "BSL";
}

void BSL::resetLexer() {

	isEOF = false;
	node = nullptr;
	token = nullptr;
	position.clear();
	if (parser) parser->~BSLParser();
	parser = nullptr;
	if (tokens) tokens->~CommonTokenStream();
	tokens = nullptr;
	if (lexer) lexer->reset();
}

variant_t BSL::Execute(variant_t value) {
	if (!std::holds_alternative<const wchar_t*>(value))
		throw ERROR_TYPE;
	resetLexer();
	input = new wANTLRInputStream(std::get<const wchar_t*>(value));
	lexer = new BSLLexer(input);
	tokens = new antlr4::CommonTokenStream(lexer);
	parser = new BSLParser(tokens);
	
	parser->file();
	int32_t numberOfSyntaxErrors = parser->getNumberOfSyntaxErrors();
	parser->reset();
	
	return numberOfSyntaxErrors;
}

variant_t BSL::next() {

	if (!tokens)
		throw ERROR_NOT_BEGIN;
	
	token = nullptr;
	if (!node && !isEOF) { // инициализация
		node = parser->file();
		return true;
	} else if (position.empty()) { // в корне дерево один элемент, по NEXT удалим его и закроем парсер
		resetLexer();
		return false;
	} else if (position.back() == node->children.size() - 1) { // достиг последнего элемента
		position.pop_back();
		node = node->parent;
		isEOF = !node;
		return false;
	}
	else {
		position.back()++;
		if (node->children[position.back()]->getTreeType() == antlr4::tree::ParseTreeType::TERMINAL)
			token = dynamic_cast<antlr4::tree::TerminalNodeImpl*>(node->children[position.back()])->getSymbol();
		return true;
	}
}

variant_t BSL::getType() {

	if (!tokens)
		throw ERROR_NOT_BEGIN;

	if (token) {
		std::string_view symbolicName = parser->getVocabulary().getSymbolicName(token->getType());
		return std::string(symbolicName.begin(), symbolicName.end());
	} else if (node) {
		if (position.empty() || position.back() < 0) {
			return node->getTreeType() == antlr4::tree::ParseTreeType::RULE ? parser->getRuleNames()[((antlr4::RuleContext*)node)->getRuleIndex()] : ERROR_SYNTAX;
		} else
			return node->children[position.back()]->getTreeType() == antlr4::tree::ParseTreeType::RULE ? parser->getRuleNames()[((antlr4::RuleContext*)node->children[position.back()])->getRuleIndex()] : ERROR_SYNTAX;
	} else
		throw ERROR_SOURCE_UNDEFINED;
}

variant_t BSL::getText() {

	if (!tokens)
		throw ERROR_NOT_BEGIN;

	if (token)
		return token->getText();
	else if (node) {
		if (position.empty() || position.back() < 0)
			return node->getText();
		else
			return node->children[position.back()]->getText();
	}	
	else
		throw ERROR_SOURCE_UNDEFINED;
}

variant_t BSL::getItems() {

	if (!node) {
		throw ERROR_NOT_BEGIN;
	}
	else if (token) {
		throw ERROR_IS_RULE;
	}
	else if (position.empty()) {
		position.push_back(-1);
		return true;
	}
	else {
		node = node->children[position.back()];
		position.push_back(-1);
		return true;
	}
}