We search some hints in /etc/passwd. We can see in this file the password hash (42hDRfypTqqnw) of flag01 is there (whereas he should be in /etc/shadow for more security). We use John the Ripper to crack it :
john <(echo -n 42hDRfypTqqnw)
And surprise, with the default wordlist we crack it and find '?:abcdefg'. We log in as flag01 and getflag give us the token 'f2av5il02puano7naaf6adaaf'.