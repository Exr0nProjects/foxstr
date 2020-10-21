#include "automaton.hpp"

Automaton::Automaton(const char c)
{
    _beg = std::make_shared<State>();
    _end = std::make_shared<State>();
    _beg->linkTo(c, _end);
}

Automaton::Automaton(const std::string&)
{
    // TODO
}

void Automaton::createQuery(std::string &s) {}

// automaton composition functions
void Automaton::concat(Automaton &o)
{
    // concatenate two automatons together in series
    if (!valid) return;
    _end->consume(o._beg);
    _end = o._end;
    o._beg = o._end = nullptr; o.valid = 0;
}
void Automaton::couple(Automaton &o)
{
    // couple two automatons together in parallel
    if (!valid) return;
    _beg->consume(o._beg);
    auto newEnd = std::make_shared<State>();
      _end->linkTo(-1, newEnd);
    o._end->linkTo(-1, newEnd);
    _end = newEnd;
    o._beg = o._end = nullptr; o.valid = 0;
}

void Automaton::print() const
{
    if (!valid) { printf("    debug invalidated automaton;\n"); return; }
    printf("    debug automaton id %8x (%8x -> %-8x):\n", id, _beg->id, _end->id);
    // print internal state graph using a bfs
    std::set<unsigned> vis;
    std::queue<std::shared_ptr<State> > bfs;
    bfs.push(_beg);
    for (bfs.push(_beg); !bfs.empty(); bfs.pop())
    {
        if (vis.count(bfs.front()->id)) continue;
        vis.insert(bfs.front()->id);
        bfs.front()->print();
        // TODO: push to queue
        for (auto &s : bfs.front()->nxtl())
            if (s.size()) for (auto &p : s)
                bfs.push(p);
    }
    printf("\n");
}

