#ifndef IDENTIFIER_TOKEN_H
#define IDENTIFIER_TOKEN_H

#include "index.h"

class IdentifierToken
{
    public:
        IdentifierToken(std::string value, int line_number);
    
    private:
        Token token;
};

#endif