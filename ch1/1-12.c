/*Write a program that prints its input one word per line.*/

#include <stdio.h>

main()		//Prints input one word per line.
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			putchar('\n');
		}
		else {
			putchar(c);
		}
	}
	return 0;
}
