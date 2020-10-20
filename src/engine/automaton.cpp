#include "automaton.hpp"

// TODO: \/ all of those

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
    if (!id()) return;
    _end->assign(o._beg);
    _end = o._end;
    o._beg = o._end = nullptr;
    o._id = 0;
}
void Automaton::couple(Automaton &o) {} // TODO
//Automaton Automaton::concat(Automaton& a, Automaton& b)
//{
//    a._end->assign(b._beg);
//}
//Automaton Automaton::couple(Automaton& a, Automaton& b) {}

void Automaton::print() const
{
    if (!id()) printf("debug invalidated automaton;\n"); else
    printf("debug automaton id %8x (%8x -> %-8x):\n", id(), _beg->id(), _end->id());
}

