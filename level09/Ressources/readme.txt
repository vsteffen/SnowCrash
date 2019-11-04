When we try to give an argument to the program, we can conclude it simply encrypt 'av[1]' by adding a n number for the ascii character depending of his position in the string. We can simply decrypt the file 'token' in the home directory by doing the opposite with this script:
cat > /tmp/main.c << EOF
#include <stdio.h>

int main(int ac, char **av)
{
	int 	i;

	i = 0;
	while (av[1][i] != '\0')
	{
		printf("%c", av[1][i] - i);
		i++;
	}
	printf("\n");
	return (0);
}
EOF

We decrypt the token:
/tmp/a.out `cat /home/user/level09/token`
The token is : 'f3iji1ju5yuevaus41q1afiuq' then we 'su' as flag09 and the flag is 's5cAJpM8ev6XHw998pRWG728z'.
