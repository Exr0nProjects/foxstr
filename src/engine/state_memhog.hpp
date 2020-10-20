#ifndef FOXSTR_STATE
#define FOXSTR_STATE

#include <iterator>
#include <list>
#include <array>

#include "config.hpp"

class State
{
public:
    std::array<std::shared_ptr<State>, ALPHABET_SIZE> _nxt;
    std::list<std::shared_ptr<State> > _nop;
    std::shared_ptr<State> fail=nullptr;    // TODO: ac auto style failpointers
    // TODO: convert to iterator someday
    //class iterator: public std::iterator<
    //    // from https://en.cppreference.com/w/cpp/iterator/iterator
    //                std::random_access_iterator_tag,
    //                const State,
    //                size_t,
    //                const State*,
    //                const State>
    //{}
    void print();
};

#endif
