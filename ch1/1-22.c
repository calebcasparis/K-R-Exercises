/*Write a program to "fold" long input lines into two or more
**shorter lines after the last non-blank character that occurs
**before the nth column of input.*/
#include <stdio.h>

#define	MAXCHAR	1000
#define	FOLD	5

int getlin(char s[], int max);

main()
{
	int i, len, blankmark;
	char line[MAXCHAR];

	while ((len = getlin(line, MAXCHAR)) > 0) {
		if (len < FOLD) {
		}
		else {
			blankmark = 0;
			for (i=1; i<len; i++) {
				if (line[i] == ' ') {
					blankmark = i;
				}
				if ((i%FOLD) == 0) {
					line[blankmark] = '\n';
				}
			}
		}
		printf("%s", line);
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
