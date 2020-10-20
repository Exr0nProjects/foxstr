#include <cstdio>
#include "state_memhog.hpp"

void State::assign(std::shared_ptr<State> op)
{
    for (size_t i=0; i<ALPHABET_SIZE; ++i)
        _nxt[i].merge(op->_nxt[i]);
}

void State::print() const
{
    printf("debug state id %x\n", id);
    bool has=0;
    for (const std::set<std::shared_ptr<State> > &s : _nxt)
        if (s.size()) for (const std::shared_ptr<State>& p : s)
                printf("    %3zu '%c'-> %x\n", &s-_nxt.begin(), &s-_nxt.begin(), p->id);
    if (!has) printf("    (no downstream states)\n");
}
