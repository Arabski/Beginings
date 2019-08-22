#include <stdio.h>
#include <stdlib.h>

float calc_fahren(float celsius);
float calc_celsius(float fahren);

float main (void)
{
	float t;
	char scale;
	
	printf("Type degree scale to convert from: \n");
	scanf("%c", &scale);

	if(scale == 'c' || scale == 'C'){
		printf("Type celsius degree: ");
		scanf("%f", &t);
		
		t = calc_fahren(t);
		printf("Fahrenheit temp is: %.2f\n", t);
		
		}
	else if(scale == 'f' || scale == 'F'){
		printf("Type Fahrenheit degree: ");
		scanf("%f", &t);
		t = calc_celsius(t);
		printf("Celsius temp is: %.2f\n", t);
		
		}
	

return 0;
}

float calc_fahren(float celsius)
{
	
	celsius = celsius * 1.8 + 32.0;
	return(celsius);
}

float calc_celsius(float fahren)
{
	fahren = (fahren - 32) * 5/9;
	return(fahren);
}
