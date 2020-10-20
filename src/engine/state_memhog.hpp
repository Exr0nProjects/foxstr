#ifndef FOXSTR_STATE
#define FOXSTR_STATE

#include <iterator>

#include "config.hpp"

class State
{
    State* _nxt[ALPHABET_SIZE];
    // TODO: convert to iterator someday
    //class iterator: public std::iterator<
    //    // from https://en.cppreference.com/w/cpp/iterator/iterator
    //                std::random_access_iterator_tag,
    //                const State,
    //                size_t,
    //                const State*,
    //                const State>
    //{}
public:
    void print();
};

#endif
