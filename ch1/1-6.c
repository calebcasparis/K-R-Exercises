//Verify that the expression getchar() != EOF is 0 or 1

#include <stdio.h>

main()		//Verifies that getchar() != EOF is 0 or 1. Enter Ctrl+d in Linux to return 0.
{
	printf("(getchar() != EOF) = %d\n", getchar() != EOF);
}
