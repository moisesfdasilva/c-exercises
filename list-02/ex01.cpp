#include<stdio.h>

int main() {
	float num1, num2, num3, num4, avg;

	printf("Enter first test score:");
	scanf("%f", &num1);
	printf("Enter second test score:");
	scanf("%f", &num2);
  printf("Enter third test score:");
	scanf("%f", &num3);
	printf("Enter fourth test score:");
	scanf("%f", &num4);

	avg = (num1 + num2 + num3 + num4) / (float) 4;

	if (avg >= 7)
		printf("\nAproved\n");
	else
		printf("\nNot Aproved\n");

	return 0;
}