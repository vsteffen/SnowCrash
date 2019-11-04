We see that we have a lua program running on port 5151. The program ask for a password, encrypt it and compare it to a hard coded hash. To encrypt it, the program start a shell command and we can inject our malicious command ';getflag>/tmp/sol' who start getflag and store the result in a tempory file since we don't have the stdout of the script:

netcat localhost 5151
Password: ;getflag>/tmp/sol
cat /tmp/sol

We get the flag 'fa6v5ateaw21peobuub8ipe6s'.
