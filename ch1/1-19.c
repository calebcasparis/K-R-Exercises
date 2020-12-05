#include <stdio.h>

#define MAXCHAR 100

int getlin(char lin[], int max);
void revline(char lin[]);

main()
{
	int len;
	char line[MAXCHAR];
	char outp[MAXCHAR];

	len = 0;
	while (len = getlin(line, MAXCHAR) > 0) {
		revline(line);
	}
}

int getlin(char s[], int max)
{
	int c, i;

	for (i=0; i<max-1 && (c=getchar()) != EOF && c!='\n'; ++i) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void revline(char lin[])			//Reverses a string when called.
{
	int i, j, k;

	i = j = k = 0;
	while (lin[i] != '\0') {
		++i;
	}
	char outp[i];

	for (j=i; j>=0; --j && ++k) {		//Assigns the characters in the input to the output
		outp[j] = lin[k];		//array backwards.
	}
	printf("%s\n", outp);
}
