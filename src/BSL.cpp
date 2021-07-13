
#include "BSL.h"

#define ERROR_TYPE "Type not supported!";
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
				std::cout << "error" << std::endl;
		}
		p = 0;
	}
};

BSL::BSL() {

    // Full featured property registration example
    AddProperty(L"Version", L"ВерсияКомпоненты", [&]() {return std::make_shared<variant_t>(std::move(std::string(Version)));});

	AddProperty(L"Text", L"Текст",
		[&]() {return std::make_shared<variant_t>(std::move(std::string("analysisText"))); },
		[&](variant_t value) {
			if (!std::holds_alternative<const wchar_t*>(value))
				throw ERROR_TYPE;
			resetLexer();
			analysisText = std::get<const wchar_t*>(value);
			input = new wANTLRInputStream(analysisText);
			lexer = new BSLLexer(input);});

	// представление
	AddMethod(L"Rules", L"Правила", this, &BSL::getRules);
	AddMethod(L"Lexemes", L"Лексемы", this, &BSL::getLexemes);
	AddMethod(L"Channels", L"Каналы", this, &BSL::getChannels);

	// метод старт
	AddMethod(L"Execute", L"Выполнить", this, &BSL::Execute, { {0, -1} });
	
	// Общие методы
	AddMethod(L"Next", L"Следующий", this, &BSL::next);
	AddMethod(L"Type", L"Тип", this, &BSL::getType);
	AddMethod(L"Text", L"Текст", this, &BSL::getText);
	AddMethod(L"LineNumber", L"НомерСтроки", this, &BSL::getLine);
	AddMethod(L"SymbolNumber", L"НомерСимвола", this, &BSL::getCharPositionInLine);

	// методы Дерево
	AddMethod(L"IsLexeme", L"ЭтоЛексема", this, &BSL::isLexeme);
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

variant_t BSL::getRules() {
	return "";
}
variant_t BSL::getLexemes() {
	return "";
}
variant_t BSL::getChannels() {
	return "";
}

void BSL::Execute(variant_t type) {
	resetLexer();

	if (!lexer)
		throw ERROR_TEXT_ANALYSIS;

	if (std::get<int>(type) < 0) {
		tokens = new antlr4::CommonTokenStream(lexer);
		parser = new BSLParser(tokens);
	} else {
		tokens = new antlr4::CommonTokenStream(lexer, std::get<int>(type));
	}
}

variant_t BSL::next() {

	if (!tokens)
		throw ERROR_NOT_BEGIN;
	
	if (parser) { // ParseTree
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
		} else {
			position.back()++;
			if (node->children[position.back()]->children.empty())
				token = ((antlr4::tree::TerminalNode*)node->children[position.back()])->getSymbol();
			return true;
		}
	} else { // перебор токены по ключу
		if (token)
			tokens->consume();
		if (tokens->LA(1) == antlr4::Token::EOF) {
			resetLexer();
			return false;
		} else {
			token = tokens->LT(1);
			return true;
		}
	}
}

variant_t BSL::getType() {

	if (!tokens)
		throw ERROR_NOT_BEGIN;

	if (token)
		return (int32_t)token->getType();
	else if (node)
		if (position.empty() || position.back() < 0)
			return (int32_t)((antlr4::RuleContext*)node)->getRuleIndex();
		else
			return (int32_t)((antlr4::RuleContext*)node->children[position.back()])->getRuleIndex();
	else
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

variant_t BSL::getLine() {

	if (!token)
		throw ERROR_NOT_SELECT_TOKEN;

	return (int32_t)token->getLine();
}

variant_t BSL::getCharPositionInLine() {

	if (!token)
		throw ERROR_NOT_SELECT_TOKEN;
	
	return (int32_t)token->getCharPositionInLine();
}

variant_t BSL::isLexeme() {
	if (!node)
		throw ERROR_NOT_BEGIN;
	return (bool)token;
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