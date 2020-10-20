#ifndef FOXSTR_STATE
#define FOXSTR_STATE

#include <iterator>
#include <list>
#include <array>
#include <set>
#include <cstdlib>

#include "config.hpp"

class State
{
    // force move semantics by deleting the copy constructors--https://stackoverflow.com/a/45443643/10372825
    unsigned id = rand();
    State(const State&)= delete;
    State& operator=(const State&)= delete;
    // TODO: destructors
public:
    State() {};
    std::array<std::set<std::shared_ptr<State> >, ALPHABET_SIZE> _nxt;
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
    void assign(std::shared_ptr<State> o);
    void print() const;
    bool operator=(State &o) const { return id < o.id; };
};

#endif
