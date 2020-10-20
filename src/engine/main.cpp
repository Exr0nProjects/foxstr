#include <cstdio>

#include "automaton.hpp"

int main()
{
    Automaton at_h('h');
    Automaton at_i('i');
    at_h.print();
    at_i.print();
    at_h.concat(at_i);
    at_h.print();
    at_i.print();
}

