Hi ! :)

For the level00, we start the following command to find some files owned by flag00:
find / \( -user flag00 -o -group flag00 \) 2>&-
We find the file "/usr/sbin/john" which contain "cdiiddwpgswtgt". We can see there's only letters and maybe with some good old brute force, we can can decrypt this with the Caesar encryption. We start the script in Ressources and for rot 11, we can see the password "nottoohardhere".
We log with flag00 and get the flag "x24ti5gi3x0ol2eh4esiuxias".
