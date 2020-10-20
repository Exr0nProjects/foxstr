#include <cstdio>

#include "automaton.hpp"

int main()
{
    // epic
    printf("Hello World\n");
    State t;
    t._nxt[0] = std::make_shared<State>(t);
    t.print();
}

