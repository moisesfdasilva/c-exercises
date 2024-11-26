#include<stdio.h>

float avg(float a, float b) {
	return (a + b) / 2;
}

int main() {
	float num[3];

	printf("Enter first test score:");
	scanf("%f", &num[0]);
	printf("Enter second test score:");
	scanf("%f", &num[1]);

	num[2] = avg(num[0], num[1]);

	printf("\nThe average is %.2f\n", num[2]);

	if (num[2] >= 6)
		printf("\n  Approved with average %.2f\n", num[2]);
	else
		printf("\n  Repproved with average %.2f\n", num[2]);

	return 0;
}