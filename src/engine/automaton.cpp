#include "automaton.hpp"

Automaton::Automaton(const char c)
{
    _beg = std::make_shared<State>();
    _end = std::make_shared<State>();
    _beg->linkTo(c, _end);
}

Automaton::Automaton(const std::string&, size_t l, size_t r) {}

void Automaton::createQuery(std::string &s) {}

// automaton composition functions
void Automaton::concat(Automaton &o)
{
    if (!valid) return;
    _end->assign(o._beg);
    _end = o._end;
    o._beg = o._end = nullptr;
    o.valid = 0;
}
void Automaton::couple(Automaton &o)
{
    if (!valid) return;
    _beg->assign(o.beg);
    _end->assign(o.end);
    // incomplete
}

void Automaton::print() const
{
    if (!valid) printf("debug invalidated automaton;\n"); else
    printf("debug automaton id %8x (%8x -> %-8x):\n", id, _beg->id, _end->id);
}

