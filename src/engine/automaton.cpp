#include "automaton.hpp"

// TODO: \/ all of those

Automaton::Automaton(const char c)
{
    _beg = std::make_shared<State>();
    _end = std::make_shared<State>();
    _beg->linkTo(c, _end);
}

Automaton::Automaton(const std::string&, size_t l, size_t r) {}

//Automaton::Automaton(Automaton&& o) {}
//Automaton& Automaton::operator=(Automaton&& o) {}

// automaton composition functions
Automaton Automaton::concat(Automaton&& a, Automaton&& b)
{

}
Automaton Automaton::couple(Automaton&& a, Automaton&& b) {}

void Automaton::createQuery(std::string &s) {}

void Automaton::print() const
{
    printf("debug automaton id %8x (%8x -> %-8x):\n", id, _beg->id, _end->id);
}

