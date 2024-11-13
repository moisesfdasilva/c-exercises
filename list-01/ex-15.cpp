#include<stdio.h>

int main() {
	float num1, num2, avg;

	printf("Enter first test score:");
	scanf("%f", &num1);
	printf("Enter second test score:");
	scanf("%f", &num2);

	avg = (num1 + num2) / 2;
	printf("\nThe average is %.2f\n", avg);

	if (avg >= 6)
		printf("\n Approved with average %.2f\n", avg);
	else
		printf("\n Repproved with average %.2f\n", avg);

	return 0;
}