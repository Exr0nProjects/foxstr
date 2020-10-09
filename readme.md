# Flashertext

[FlashText](https://github.com/vi3k6i5/flashtext) with the [Thomson algorithm](https://swtch.com/~rsc/regexp/regexp1.html).

Idea: the Thomson algorithm uses NFAs to match a single regexp to a string. FlashText uses an AC Automaton to make one amotrized linear pass on the search string. Maybe it's possible to combine the failpointer concept from AC Auto to link multiple Thomson NFAs together... Which would create $\text O(S+\sum P)$ dictionary regex matching!

Other Sources:
- https://perl.plover.com/Regex/article.html 

