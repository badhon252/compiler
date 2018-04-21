#ifndef VAR_STACK
#define VAR_STACK

#include <deque>
#include <set>
#include <string>
#include "../token/token.h"

class VarStack
{
    public:
        VarStack();
        void push();
        void pop();
        void insert(Token var);
        void erase(Token var);
        int find(Token var);

    private:
        std::deque<std::set<Token>> var_stack;

};

#endif