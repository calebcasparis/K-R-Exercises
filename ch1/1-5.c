/** Modify the temperature conversion program to
****print the table in reverse order, that is,
****from 300 degrees to 0.*/

#include <stdio.h>

main()          //Converts Fahrenheit to Celsius
{
	int f;
	printf("Fahrenheit\tCelsius\n");
	for (f=300; f>=0; f=f-20) {
		printf("%6d\t\t%6.1f\n", f, (5.0*(f-32))/9.0);
	}
	return 0;
}
