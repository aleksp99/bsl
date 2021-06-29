
#ifndef BSL_H
#define BSL_H

#include "antlr4-runtime.h"
 
#include "BSLLexer.h"
#include "BSLParser.h"

#include "Component.h"

class BSL final : public Component {
public:
    const char *Version = u8"1.0.0";

    BSL();
    ~BSL();

private:
    std::string extensionName() override;

    antlr4::ANTLRInputStream* input = nullptr;
    BSLLexer* lexer = nullptr;
    antlr4::CommonTokenStream* tokens = nullptr;
    BSLParser* parser = nullptr;
    antlr4::tree::ParseTree* tree = nullptr;

    antlr4::tree::ParseTree* node = nullptr;
    std::vector<int32_t> position;
    std::vector<antlr4::tree::ParseTree*> items;

    variant_t parse(variant_t& value); // error
    
    variant_t next();
    variant_t isLexeme();
    variant_t getItems();

    variant_t getType();
    variant_t getText();

    // symbol
    variant_t getLine();
    variant_t getCharPositionInLine();

};

#endif //BSL_H
