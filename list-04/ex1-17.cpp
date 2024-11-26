#include<stdio.h>

float fahrenheit(float celsius) {
	return (9 * celsius / (float) 5) + 32;
}

int main(){
  float celsius;

	printf("Enter the temperature in Celsius degrees:");
	scanf("%f", &celsius);

	printf("Temperature in Fahrenheit %.2f\n", fahrenheit(celsius));

	return 0;
}