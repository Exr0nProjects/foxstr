#include <cstdio>

#include "automaton.hpp"

int main()
{
    printf("Hello World\n");
    // NOTE: unessecary use of smart pointer that becomes needed when dynamically allocated in Automaton
    Automaton at('e');
    //auto tptr = std::make_shared<State>();
    //tptr->_nxt[0].insert(tptr);
    //tptr->print();
    //at._beg->print();
    at.print();
}

