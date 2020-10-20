# Flashertext

[FlashText](https://github.com/vi3k6i5/flashtext) with the [Thomson algorithm](https://swtch.com/~rsc/regexp/regexp1.html).

Idea: the Thomson algorithm uses NFAs to match a single regexp to a string. FlashText uses an AC Automaton to make one amotrized linear pass on the search string. Maybe it's possible to combine the failpointer concept from AC Auto to link multiple Thomson NFAs together... Which would create $\text O(S+\sum P)$ dictionary regex matching!

Other Sources:
- [More high level overview](https://swtch.com/~rsc/regexp/regexp1.html)
- [Good overview + some implementation details](https://perl.plover.com/Regex/article.html)
- [Simple diagrams to get the gist of things (basically a tldr)](http://www.cs.may.ie/staff/jpower/Courses/Previous/parsing/node5.html)
- [Fancier diagrams, still digestable](https://medium.com/swlh/visualizing-thompsons-construction-algorithm-for-nfas-step-by-step-f92ef378581b)
- [Walkthrough example of constructing a thompson construction](https://www.cs.york.ac.uk/fp/lsa/lectures/REToC.pdf)

