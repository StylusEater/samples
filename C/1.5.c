#include <stdio.h>

/* print Fahrenheit-Celsius table in reverse order
   for fahr = 300, 280, ..., 0; floating-point-version */

void main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit of temperature table */
	step = 20;	/* step between intervals */

	fahr = upper;
	printf("---------------------\n");
	printf("Fahrenheit || Celsius\n");
	printf("---------------------\n");
	while (fahr >= lower)
	{
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f        || %6.1f\n", fahr, celsius);
		fahr = fahr - step;
	}
}
