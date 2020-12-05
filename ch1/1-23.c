/*Write a program to remove all comments from a C program.*/
#include <stdio.h>

#define MAXLINE	1000

int main()
{
	char output[MAXLINE], c;
	int i,  pos;

	int in_comm, in_str;			//Boolean values indicating whether or not we're in a comment or string
	i = in_comm = pos = in_str = 0;
	while ((c = getchar()) != EOF) {
		if (c == '"') {
			in_str = !in_str;	//sets whether or not we're in a string

		}
		else if (c == '\'') {		//Makes sure the program doesn't get tripped up by single ",
			in_str = 0;		//like the one on line 14 of this program.
		}
		if (((c == '*') || (c == '/')) && (i>0) && (output[i-1] == '/') && !in_str) {
			if (in_comm) {
				continue;	//Jumps to the beginning of the loop
			}
			in_comm = !in_comm;
			pos = i-1;		//Sets pos at the first slash of the comment
		}
		else if ((c == '/') && i>0 && (output[i-1] == '*') && in_comm && !in_str) {
			i = pos;		//sets i back at pos; Begins rewriting the array.
			in_comm= !in_comm;
			continue;		//Jumps to the beginning of the loop
		}
		else if ((c == '\n') && i>0 && (output[pos+1] == '/') && in_comm && !in_str) {
			output[pos-1] = '\n';
			i = pos;
			in_comm = !in_comm;
			continue;
		}

		output[i] = c;
		i++;
	}
	output[i] = '\0';
	printf("%s", output);
	return 0;
}
