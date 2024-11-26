#include<stdio.h>

float bonus(float salary, float years) {
	float percent = 0.1;

	if (years >= 5)
		percent = 0.2;

	return salary * percent;
}

int main() {
	float salary, years;

	printf("\nXKW Company\n");
	printf("Enter salary:\n");
	scanf("%f", &salary);
	printf("Enter the duration of your work here:\n");
	scanf("%f", &years);

	printf("Your bonus: R$ %.2f.\n", bonus(salary, years));

	return 0;
}