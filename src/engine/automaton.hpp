#ifndef FOXSTR_AUTOMATON
#define FOXSTR_AUTOMATON

#include <string>

#include "state_memhog.hpp"
#include "query.hpp"

class Automaton
{
    State *_beg=nullptr, *_end=nullptr;
    // automaton composition functions
    static Automaton concat(Automaton&& a, Automaton&& b);
    static Automaton couple(Automaton&& a, Automaton&& b); // TODO: replace with variadic template--https://stackoverflow.com/a/9040913/10372825
    

    // disable copying--https://mbevin.wordpress.com/2012/11/20/move-semantics
    Automaton(const Automaton&);
    Automaton& operator=(const Automaton&);
public: 
    // move semantics
    Automaton() {}
    Automaton(char *c);
    Automaton(Automaton&& o);
    Automaton& operator=(Automaton&& o);

    static Automaton construct(std::string);

    void createQuery(std::string &s);
};

#endif
