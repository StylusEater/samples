#include <stdio.h>

/* print Celsius-Fahrenheit table
   for fahr = 0, 20, ..., 300; floating-point-version */

void main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit of temperature table */
	step = 20;	/* step between intervals */

	celsius = lower;
	printf("---------------------\n");
	printf("Celsius || Fahrenheit\n");
	printf("---------------------\n");
	while (celsius <= upper)
	{
		fahr = ((9.0/5.0) * celsius) + 32.0;
		printf("%3.0f     || %3.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
