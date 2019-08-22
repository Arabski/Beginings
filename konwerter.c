#include <stdio.h>
#include <stdlib.h>

float calc_fahren(float celsius);

float main (void)
{
	int t;
	

	printf("Type celsius degree: ");
	scanf("%d", &t);
	
	printf("Fahrenheit temp is: ");
	calc_fahren(t);
	

return 0;
}

float calc_fahren(float celsius)
{
	
	celsius = celsius * 1.8 + 32.0;
	printf("%.2f\n", celsius);
}
