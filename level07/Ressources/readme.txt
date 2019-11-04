While looking at the program with gdb : we see that it calls 'getenv' retrieve the env variable 'LOGNAME', then it calls 'asprintf' with the string "/bin/echo %s" to replace "%s" with the result of 'LOGNAME'.
So if we change 'LOGNAME', we can execute getflag:
env LOGNAME=';getflag' ./level07
And the flag is 'fiumuikeil55xe9cu4dood66h'.