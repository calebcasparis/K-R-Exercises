/*Write a program to check a C program for rudimentary syntax errors
**like unbalanced parenthesis, brackets, and braces.*/
#include <stdio.h>
#include <stdlib.h>

#define MAXCHAR	1000

int getlin(char s[], int max);

main()		//I'm dumb
{
	int opar, ocom, obrac, obrak, cpar, ccom, cbrac, cbrak, quotes;
	int i, j, len, err;
	char line[MAXCHAR];

	opar = ocom = obrac = obrak = cpar = ccom = cbrac = cbrak = quotes =  err = 0;

	j = -1;
	while ((len = getlin(line, MAXCHAR)) > 0) {
		for (i=0; i<=len; ++i && ++j) {
			if (line[i] == '(') {
				++opar;
			}
			else if (line[i] == ')') {
				++cpar;
			}
			else if (line[i] == '*' && line[j] == '/') {
				++ocom;
			}
			else if (line[i] == '/' && line[j] == '*') {
				++ccom;
			}
			else if (line[i] == '{') {
				++obrac;
			}
			else if (line[i] == '}') {
				++cbrac;
			}
			else if (line[i] == '[') {
				++obrak;
			}
			else if (line[i] == ']') {
				++cbrak;
			}
			else if (line[i] == '"') {
				++quotes;
			}
		}

		if (opar != cpar) {
			printf("%d uneven parenthesis.\n", (abs(opar-cpar)));
			++err;
		}
		if (ocom != ccom) {
			printf("%d uneven comment brackets.\n", (abs(ocom-ccom)));
			++err;
		}
		if (obrac != cbrac) {
			printf("%d uneven braces.\n", (abs(obrac-cbrac)));
			++err;
		}
		if (obrak != cbrak) {
			printf("%d uneven brackets.\n", (abs(obrak-cbrak)));
			++err;
		}
		if ((quotes%2) != 0) {
			printf("%d uneven quotes.\n", (quotes%2));
			++err;
		}
		if (err == 0) {
			printf("No rudimentary errors.\n");
		}
	}
	return 0;
}

int getlin(char s[], int max)
{
	int c, i;

	for (i=0; i<max-1 && (c = getchar()) != EOF; ++i) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
