#include<stdio.h>

int main() {
  float d, as;

	printf("Enter the duration in hours:");
	scanf("%f", &d);
	printf("Enter the average speed in km/h:");
	scanf("%f", &as);

	printf("Average speed: %.2f km/h\n", as);
	printf("Duration of travel: %.2f hours\n", d);
	printf("Distance traveled: %.2f km\n", d * as);
	printf("Fuel used:");
	printf(" %.2f liters\n", d * as / 12);

	return 0;
}