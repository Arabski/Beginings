#include <stdio.h>
#include <stdlib.h>

float calc_fahrenheit(float celsius);

int main(int argc, char* argv[])
{
	calc_fahrenheit;
	printf("argc: %d\n", argc);
	
	float f, c;
	int i;

	
	for(i=1; i<argc; i++){
	f = atof(argv[i]);
	c = calc_fahrenheit(f);
	}
	printf("fahren: %f\n", c);
	
	

	return 0;
}

float calc_fahrenheit(float celsius)
{

return celsius = (celsius * 9/5) + 32;
}
