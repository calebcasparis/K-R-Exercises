/** Modify the temperature conversion program to print a heading
****above the table*/

#include <stdio.h>


main()		//Converts Fahrenheit to Celsius
{
	int f;

	printf("Fahrenheit\tCelsius\n");
	for (f=0; f<=10; ++f) {
		printf("%5d\t\t%4.1f\n", f, (5.0*(f-32))/9.0);
	}
	return 0;
}
