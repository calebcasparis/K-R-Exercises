#include <stdio.h>
#include <limits.h>


main()		//prints the ranges of the data types

{

	printf("\nUnsigned char range: %d - %d\n", 0, UCHAR_MAX);

	printf("Signed char range: %d - %d\n", SCHAR_MIN, SCHAR_MAX);

	printf("Unsigned short range: %d - %d\n", 0, USHRT_MAX);

	printf("Signed short range: %d - %d\n", SHRT_MIN, SHRT_MAX);

	printf("Unsigned int range: %d - %ud\n", 0, UINT_MAX);

	printf("Signed int range: %d - %d\n", INT_MIN, INT_MAX);

	printf("Unsigned long range: %d - %lu\n", 0, ULONG_MAX);

	printf("Signed long range: %ld - %ld\n\n", LONG_MIN, LONG_MAX);

	return 0;

}
