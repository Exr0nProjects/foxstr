#include <cstdio>
#include "state_memhog.hpp"

void State::print() const
{
    printf("debug state at %x\n", this);
    bool has=0;
    for (const std::list<std::shared_ptr<State> > &l : _nxt)
        for (const std::shared_ptr<State>& p : l)
            if (p) has=1,
                printf("    %3zu '%c'-> %x\n", &l-_nxt.begin(), &l-_nxt.begin(), &*p);
    if (!has) printf("    (no downstream states)\n");
}
