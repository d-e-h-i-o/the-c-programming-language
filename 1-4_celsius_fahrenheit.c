#include <stdio.h>

/* print celsius fahrenheit table*/

main(){

	float fahr, celsius;
	int lower, upper, step;

	lower = 0; 		// lower limit of temperature table
	upper = 300; 	// upper limit
	step = 20; 		// step size

	celsius = lower;

	printf("Celsius, Fahrenheit\n");

	while(celsius <= upper){
		fahr = (9.0*celsius) / 5.0 + 32.0;
		printf("%3.0f %6.0f\n", celsius, fahr);
		celsius = celsius + step;
	}

}