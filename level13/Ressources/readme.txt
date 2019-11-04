We use gdb to do some reverse engineering. We see that if we are the right uid, the program jump to print the token so with gdb, to be quick and dirty, we can change $eip to jump to the solution.

gdb /home/user/level13/level13
b main
r
set $eip = *main+0x3f
c

We have our token '2A31L79asukciNyi8uppkEuSx'.
