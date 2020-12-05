/*Write a program detab that replaces tabs in the input with the
**proper number of blanks to space to the next tab stop.*/

#include <stdio.h>

#define	MAXCHAR	1000
#define	TABWIDE	8	//Sets the width of a tab

int getlin(char s[], int max);
void detab(char in[], char out[]);

main()
{
	char lin[MAXCHAR];
	char tablin[MAXCHAR];
	int c, i;
	while ((c = getlin(lin, MAXCHAR)) > 0) {
		detab(lin, tablin);
		printf("%s\n", tablin);
	}
	return 0;
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

void detab(char s[], char out[])
{
	int i, j, spaces;
	char c;

	spaces = j = 0;
	for (i=0; (c = s[i]) != '\0'; i++) {
		if (c != '\t') {
			out[j++] = c;
		}
		else {					//Determines how many spaces
			spaces = TABWIDE - j % TABWIDE;	//into a tab stop we are, and
			while (--spaces > 0) {		//replaces a \t with the
				out[j++] = ' ';		//appropriate number of spaces.
			}
		}
	}
	out[j] = '\0';
}
