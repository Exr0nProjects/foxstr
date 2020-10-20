#ifndef FOXSTR_AUTOMATON
#define FOXSTR_AUTOMATON

#include <string>

#include "state_memhog.hpp"
#include "query.hpp"

class Automaton
{
    State *_beg=nullptr, *_end=nullptr;
public: 
    void createQuery(std::string &s);
};

#endif
