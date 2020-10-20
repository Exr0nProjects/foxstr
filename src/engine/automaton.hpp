#ifndef FOXSTR_AUTOMATON
#define FOXSTR_AUTOMATON

#include <string>

#include "state_memhog.hpp"
#include "query.hpp"

struct Automaton
{
    State *beg=nullptr, *end=nullptr;
    void createQuery(std::string &s);
};

#endif
