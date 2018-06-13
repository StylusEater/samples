#include <stdio.h>

/* print Celsius-Fahrenheit table
   for fahr = 0, 20, ..., 300; floating-point-version */

#define LOWER 0.0 /* lower limit of temperature table */
#define UPPER 300.0 /* upper limit of temperature table */
#define STEP 20.0 /* step between intervals */

void print_celsius_fahrenheit_table()
{

	float fahr, celsius;

	celsius = LOWER;
	printf("---------------------\n");
	printf("Celsius || Fahrenheit\n");
	printf("---------------------\n");
	while (celsius <= UPPER)
	{
		fahr = ((9.0/5.0) * celsius) + 32.0;
		printf("%3.0f     || %3.1f\n", celsius, fahr);
		celsius = celsius + STEP;
	}

}

void main()
{
	print_celsius_fahrenheit_table();
}
