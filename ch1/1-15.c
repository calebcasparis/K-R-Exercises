/*Rewrite the temperature conversion program of Section
**1.2 to use a function for conversion.*/

#include <stdio.h>

float convert(int f);

main()		//Uses a function to convert Fahrenheit to Celsius. No user input.
{
	int f;

	for (f=0; f<=10; ++f) {
		printf("%3d\t%.1f\n", f, convert(f));
	}
	return 0;
}

float convert(int f)	//Converts incoming fahrneheit values to Celsius floats
{
	float c;

	c = ((f-32)*5)/9.0;
	return c;
}
