#include <cstdio>
#include "state_memhog.hpp"

void State::print()
{
    printf("debug state %x\n", this);
    bool has=0;
    for (size_t i=0; i<ALPHABET_SIZE; ++i)
        if (_nxt[i]) has=1,
            printf("    %3d '%c' -> %x\n", i, i, _nxt[i]);
    if (!has) printf("    (no downstream states)\n");
}
