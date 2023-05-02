
#ifndef BSL_H
#define BSL_H

#include "antlr4-runtime.h"
 
#include "BSLLexer.h"
#include "BSLParser.h"

#include "Component.h"

class BSL final : public Component {
public:
    const char *Version = u8"1.0.1";

    BSL();
    ~BSL();

private:
    
    std::string extensionName() override;

    const std::string ERROR_SYNTAX = "ERROR_SYNTAX";

    antlr4::ANTLRInputStream* input = nullptr;
    BSLLexer* lexer = nullptr;
    antlr4::CommonTokenStream* tokens = nullptr;

    antlr4::Token* token = nullptr;

    // tree
    BSLParser* parser = nullptr;
    antlr4::tree::ParseTree* node = nullptr;
    std::vector<int32_t> position;
    bool isEOF;

    void resetLexer();

    variant_t Execute(variant_t type);

    variant_t next();
    variant_t getType();
    variant_t getText();

    variant_t getItems();

};

#endif //BSL_H
