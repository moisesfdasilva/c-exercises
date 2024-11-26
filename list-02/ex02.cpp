#include<stdio.h>

float avg(float a, float b, float c, float d) {
	return (a + b + c + d) / (float) 4;
}

int main() {
	float num1, num2, num3, num4;

	printf("Enter first test score:");
	scanf("%f", &num1);
	printf("Enter second test score:");
	scanf("%f", &num2);
  printf("Enter third test score:");
	scanf("%f", &num3);
	printf("Enter fourth test score:");
	scanf("%f", &num4);

	if (avg(num1, num2, num3, num4) >= 7)
		printf("\nApproved\n");
	else
		printf("\nNot approved\n");

	return 0;
}