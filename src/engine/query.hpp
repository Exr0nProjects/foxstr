#ifndef FOXSTR_QUERY
#define FOXSTR_QUERY

#include <list>
#include <string>

#include "config.hpp"
#include "state_memhog.hpp"

class Query
{
    std::list<State> _states;
    std::list<size_t> _results;
public:
    // TODO: destructors
    void parseChar(char c);
};

#endif
