#include<stdio.h>

int main() {
  float t, as;

	printf("Enter the duration in hours:");
	scanf("%f", &t);
	printf("Enter the average speed in km/h:");
	scanf("%f", &as);

	printf("Average speed: %.2f km/h\n", as);
	printf("Duration of travel: %.2f hours\n", t);
	printf("Distance traveled: %.2f km\n", t * as);
	printf("Fuel used:");
	printf(" %.2f liters\n", t * as / 12);

	return 0;
}