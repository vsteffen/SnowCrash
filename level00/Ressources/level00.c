#include <stdio.h>

int main() {
	char *crypt = "cdiiddwpgswtgt";
	char tmp[15];
	char letter;

	tmp[14] = 0;
	printf("Caesar bruteforcing [%s]:\n", crypt);
	for (char i = 1; i < 27; i++) {
		for (char j = 0; crypt[j] ; j++) {
			letter = crypt[j] - 'a';
			tmp[j] = 'a' + ((letter + i > 25) ? (letter + i) % 26 : letter + i);
		}
		printf("i = %2hhd --> [%s]\n", i, tmp);
	}
	return (0);
}