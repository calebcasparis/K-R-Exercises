/*Write a program to copy its input to its output, replacing
**each string of one or more blanks by a single blank.*/

#include <stdio.h>

main()		//Replaces any string of multiple blanks (spaces or tabs) with a single blank.
{
	int c, lastc;

	lastc = 'a';

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t') {				//if an entered character is a blank character,
			if (lastc == ' ' || lastc == '\t') {		//check if the previous character was blank.
				lastc = c;				//If it was, don't putchar, loop.
			}
			else {
				lastc = c;				//If the last character wasn't a blank,
				putchar(c);				//putchar and store c in last c.
			}
		}
		else {
			putchar(c);					//This represents the "normal" case where
			lastc = c;					//the newest entered character is not a blank.
		}
	}
	return(0);
}
