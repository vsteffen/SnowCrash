In our home directory, we find a perl script. He is running on port 4747 and we can give an argument by specifying a value for the variable 'x'. We can inject some malicious code if we reuse some backquotes inside 'x' like this :
http://x.x.x.x:4747/?x=`getflag`
We get the flag "ne2searoevaevoem4ov4ar8ap".