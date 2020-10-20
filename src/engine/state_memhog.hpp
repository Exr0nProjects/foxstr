#ifndef FOXSTR_STATE
#define FOXSTR_STATE
#include "config.hpp"

struct State
{
    State* nxt[ALPHABET_SIZE];
    void print();
};
#endif
