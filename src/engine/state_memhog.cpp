#include <cstdio>
#include "state_memhog.hpp"

void State::print()
{
    printf("debug state at %x\n", this);
    bool has=0;
    for (const std::shared_ptr<State>& p : _nxt)
        if (p) has=1,
            printf("    %3zu '%ld' -> %x\n", &p-_nxt.begin(), &p-_nxt.begin(), &p);
    if (!has) printf("    (no downstream states)\n");
}
