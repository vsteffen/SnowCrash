We have nothing in our home directory. Maybe we can directly retrieve our token in /bin/getflag ? Let's jump into it.
If we try to start the process under gdb, the program try to trace himself and detect if it is be running by a debugger to stop us. But if we use the same technique we used for level13, we can jump where we want.
Somewhere in the main, we can see theses instructions:

8048b0a:       3d be 0b 00 00          cmp    $0xbbe,%eax
8048b0f:       0f 84 b6 01 00 00       je     8048ccb <main+0x385>
8048b15:       3d be 0b 00 00          cmp    $0xbbe,%eax
8048b1a:       77 4c                   ja     8048b68 <main+0x222>
8048b1c:       3d ba 0b 00 00          cmp    $0xbba,%eax
8048b21:       0f 84 14 01 00 00       je     8048c3b <main+0x2f5>
...
8048bb0:       0f 84 0e 02 00 00       je     8048dc4 <main+0x47e>
8048bb6:       3d c6 0b 00 00          cmp    $0xbc6,%eax
8048bbb:       0f 84 24 02 00 00       je     8048de5 <main+0x49f>
8048bc1:       e9 40 02 00 00          jmp    8048e06 <main+0x4c0>

We suspect this part to be the list of the token according to the uid. And if we jump in the last one:

gdb /bin/getflag
b main
r
set $eip=*main+0x49f
c

Finally, we have the flag of the last challenge: '7QiHafiNa3HVozsaXkawuYrTstxbpABHD8CPnHJ'.
