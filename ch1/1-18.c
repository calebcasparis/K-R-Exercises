/*Write a program to remove trailing blanks and tabs from
 **each line of input, and to delete entirely blank lines*/

#include <stdio.h>
#define MAXLINE 1000

int getlin(char line[], int maxline);

main()			//Removes trailing blanks and tabs from input lines and prints them.
{
	int len, i;
	char line[MAXLINE];
	while ((len = getlin(line, MAXLINE)) > 0) {
		if (len > 1) {
			for (i = len-1; line[i] == ' ' || line[i] == '\t' || line[i] == '\n'; --i) {
			;			//Counts the number of blanks between the last
			}			//non-blank character and the '\n'
		line[i+1] = '\n';
		line[i+2] = '\0';
		len = i + 2;
		printf("%s\tLENGTH: %d\n", line, len);	//Proves the function of the program.
		}
	}
}

int getlin(char s[], int lim)
{
	int c, i;
	for (i=0; i<lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
