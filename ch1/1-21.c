/*Write a program entab that replaces strings of blanks by
**the minimum number of tabs and blanks to achieve the same
**spacing.*/

#include <stdio.h>

#define	MAXCHAR	1000
#define	TABWIDE	8	//Sets the width of a tab


main()
{
	int i, c, spaces;

	spaces = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++spaces;			//Counts spaces
			if (spaces == TABWIDE) {
				spaces = 0;
				putchar('\t');
			}
		}
		else {
			for (i=0; i<spaces; ++i) {	//takes the number of spaces
				putchar(' ');		//entered before a non-blank
			}				//character and prints them.
			spaces = 0;
			putchar(c);
		}
	}
	return 0;
}
