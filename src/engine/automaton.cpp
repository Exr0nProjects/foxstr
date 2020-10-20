#include "automaton.hpp"

// TODO: \/ all of those

Automaton::Automaton(char *c) {}
Automaton::Automaton(Automaton&& o) {}
Automaton& Automaton::operator=(Automaton&& o) {}

// automaton composition functions
Automaton Automaton::concat(Automaton&& a, Automaton&& b) {}
Automaton Automaton::couple(Automaton&& a, Automaton&& b) {}

Automaton Automaton::construct(std::string) {}

void Automaton::createQuery(std::string &s) {}

