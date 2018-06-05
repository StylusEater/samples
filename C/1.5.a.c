#include <stdio.h>

/* print Fahrenheit-Celsius table in reverse order
   for fahr = 300, 280, ..., 0; floating-point-version */

/* Let's use symbolic constants */
/* */
/* lower limit of temperature table */
#define LOWER 0
/* */
/* upper limit of temperature table */
#define UPPER 300
/* */
/* step between intervals */
#define STEP 20

void main()
{
	float fahr, celsius;

	fahr = LOWER;
	printf("---------------------\n");
	printf("Fahrenheit || Celsius\n");
	printf("---------------------\n");
	while (fahr <= UPPER)
	{
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f        || %6.1f\n", fahr, celsius);
		fahr = fahr + STEP;
	}
}
