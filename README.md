Readme.nd
December 1, 2024

Talk about egg on my face.  Somewhere along the way things
broke.  It wasn't until I got a strange conflict that I discovered
that the FIRST sets were just...well not correct.  In fact, they
were pretty much just empty.  Fixed that, but then there were too
many objects in the FIRST set, in fact, all of the FIRST sets had
all of the TERMINALS.  Took a bit of work to find that.  I ran a
simple test grammar though it, and I think the first sets are
correct, but not sure.  Gonna play with it some more and see
what I think.

July 5, 2023

This is a program to check an LL(1) Grammar for Left Recursion, 
Syntax errors, orphan productions, and conflicts.  This project
is done, as far as I am concerned.  There may be some updates
for bugs (not me!) and also to get rid of some of the dead 
weight.  There is some stuff in there that just
doesn't do anything.  There is a sample grammar (action.gram)
that has about 100 non terminals.

