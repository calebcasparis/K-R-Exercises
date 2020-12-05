/*Write a program to print a histogram of the frequencies
**of different characters in its input.*/

#include <stdio.h>
#define	ASCII	256				//represents the total number of ASCII characters possible.
main()
{
	int c, i, j;
	int characters[ASCII];			//Creates an array of 256 variables.

	for (i=0; i<=ASCII; ++i) {		//Initializes the array to contain 0 in each spot.
		characters[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		++characters[c];
	}
	for (i=0; i<=ASCII; ++i) {			//Displays the legend for the histogram, followed
		printf("%c: ", i);			//by printing a '*' for each number of that character
		for (j=characters[i]; j>0; --j) {	//encountered. Can easily be modified to only display
			printf("*");			//33-126, which are easier to display.
		}
		putchar('\n');
	}
	return 0;
}
