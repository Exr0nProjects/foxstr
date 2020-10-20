#ifndef FOXSTR_AUTOMATON
#define FOXSTR_AUTOMATON

#include <string>
#include <utility>

#include "state_memhog.hpp"
#include "query.hpp"

class Automaton
{
    bool valid = 1;
public: // TODO: debug only
    std::shared_ptr<State> _beg=nullptr, _end=nullptr;  // TODO: should be unique_ptr and weak_ptr respectively

    // disable copying--https://mbevin.wordpress.com/2012/11/20/move-semantics
    Automaton(const Automaton&)= delete;
    Automaton& operator=(const Automaton&)= delete;

public: 
    const unsigned id = rand() + 1;
    Automaton() {}
    Automaton(const char);
    Automaton(const std::string&, size_t=-1, size_t=-1);
    // automaton composition functions
    void concat(Automaton&);
    void couple(Automaton&); // TODO: replace with variadic template--https://stackoverflow.com/a/9040913/10372825

    void createQuery(std::string &s);
    void print() const;
};

#endif
