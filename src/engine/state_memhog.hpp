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
    bool valid = 1;
    // force move semantics by deleting the copy constructors--https://stackoverflow.com/a/45443643/10372825
    std::array<std::set<std::shared_ptr<State> >, ALPHABET_SIZE> _nxt; // TODO--opt: could probably be weak_ptr
    std::set<std::shared_ptr<State> > _nop;
    std::shared_ptr<State> fail=nullptr;    // TODO--mvp: ac auto style failpointers

    State(const State&)= delete;
    State& operator=(const State&)= delete;
public:
    // TODO--nice: convert to iterator someday
    //class iterator: public std::iterator<
    //    // from https://en.cppreference.com/w/cpp/iterator/iterator
    //                std::random_access_iterator_tag,
    //                const State,
    //                size_t,
    //                const State*,
    //                const State>
    //{}
    const unsigned id = rand()+1;

    State() {};
    //~State() { printf("Destructing state %8x\n", _id); }
    void linkTo(char, std::shared_ptr<State>);
    void consume(std::shared_ptr<State>);
    void print() const;
    bool operator=(State &o) const { return id < o.id; };
    const std::array<std::set<std::shared_ptr<State> >, ALPHABET_SIZE>& nxtl() const { return _nxt; }
    const std::set<std::shared_ptr<State> >& nopl() const { return _nop; }
};

#endif
