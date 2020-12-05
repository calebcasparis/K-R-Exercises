/** Write a program to print the corresponding Celsius to Fahrenheit
****table*/
#include <stdio.h>

main()          //Converts Celsius to Fahrenheit
{
	int c;

	printf("Celsius\t\tFahrenheit\n");
	for (c=0; c<=10; ++c) {
		printf("%4d\t\t%7.1f\n", c, ((c/5.0)*9)+32);
	}
	return 0;
}
