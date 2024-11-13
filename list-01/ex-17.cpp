#include<stdio.h>

int main() {
  float celsius, fahrenheit;

	printf("Enter the temperature in Celsius degrees:");
	scanf("%f", &celsius);

  fahrenheit = (9 * celsius / 5) + 32;
	printf("Temperature in Fahrenheit %.2f\n", fahrenheit);

	return 0;
}