/*Write a program to count blanks, tabs, and newlines*/

#include <stdio.h>

main()		//Counts blanks, tabs, and newlines for input. Ctrl+d to end in Linux.
{
	int c, nblank, ntab, nnewline;

	nblank = ntab = nnewline = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++nblank;
		}
		if (c == '\t') {
			++ntab;
		}
		if (c == '\n') {
			++nnewline;
		}
	}
	printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", nblank, ntab, nnewline);
	return 0;
}
