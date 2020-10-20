#ifndef FOXSTR_STATE
#define FOXSTR_STATE

#include <set>
#include <list>
#include <array>
#include <cstdio>
#include <cstdlib>
#include <iterator>

#include "config.hpp"

class State
{
    // force move semantics by deleting the copy constructors--https://stackoverflow.com/a/45443643/10372825
    State(const State&)= delete;
    State& operator=(const State&)= delete;
    // TODO: destructors
    std::array<std::set<std::shared_ptr<State> >, ALPHABET_SIZE> _nxt; // TODO--opt: could probably be weak_ptr
    std::set<std::shared_ptr<State> > _nop;
    std::shared_ptr<State> fail=nullptr;    // TODO: ac auto style failpointers
public:
    // TODO: convert to iterator someday
    //class iterator: public std::iterator<
    //    // from https://en.cppreference.com/w/cpp/iterator/iterator
    //                std::random_access_iterator_tag,
    //                const State,
    //                size_t,
    //                const State*,
    //                const State>
    //{}
    const unsigned id = rand();
    State() {};
    void linkTo(char, std::shared_ptr<State>);
    void assign(std::shared_ptr<State>);
    void print() const;
    bool operator=(State &o) const { return id < o.id; };
};

#endif
