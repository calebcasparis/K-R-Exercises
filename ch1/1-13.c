/*Write a program to print a histogram of the lengths
**of words in its input.*/

#include <stdio.h>

main()		//Draws a horizontal histogram that represents the length of words in its input.
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			putchar('\n');
		}
		else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {	//This statement excludes punctuation
			putchar('*');						//There may be a better way to do this.
		}
	}
	return 0;
}
