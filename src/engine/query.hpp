#ifndef FOXSTR_QUERY
#define FOXSTR_QUERY

#include <list>
#include <string>

#include "config.hpp"
#include "state_memhog.hpp"

struct Query
{
    std::list<State> states;
    std::list<size_t> results;
    void parseChar(char c);
};

#endif
