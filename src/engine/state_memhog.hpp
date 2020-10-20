#ifndef FOXSTR_STATE
#define FOXSTR_STATE

#include "config.hpp"

class State
{
    State* _nxt[ALPHABET_SIZE];
public:
    void print();
};

#endif
