#ifndef FOXSTR_AUTOMATON
#define FOXSTR_AUTOMATON

#include <string>
#include <utility>

#include "state_memhog.hpp"
#include "query.hpp"

class Automaton
{
    std::shared_ptr<State> _beg=nullptr, _end=nullptr;  // TODO: should be unique_ptr and weak_ptr respectively
    // automaton composition functions
    static Automaton concat(Automaton&& a, Automaton&& b);
    static Automaton couple(Automaton&& a, Automaton&& b); // TODO: replace with variadic template--https://stackoverflow.com/a/9040913/10372825
    

    // disable copying--https://mbevin.wordpress.com/2012/11/20/move-semantics
    Automaton(const Automaton&)= delete;
    Automaton& operator=(const Automaton&)= delete;
    // TODO: destructors
public: 
    Automaton() {}
    Automaton(char *c);
    // apparently \/ shouldn't be needed by using stl containers
    //// move semantics
    //Automaton(Automaton&& o);
    //Automaton& operator=(Automaton&& o);

    static Automaton construct(std::string);

    void createQuery(std::string &s);
};

#endif
