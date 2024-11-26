#include<stdio.h>

int main() {
	float salary, years, bonus;

	printf("\nXKW Company\n");
	printf("Enter salary:\n");
	scanf("%f", &salary);
	printf("Enter the duration of your work here:\n");
	scanf("%f", &years);

	if (years >= 5)
		bonus = salary * 0.2;
	else
		bonus = salary * 0.1;

	printf("Your bonus: $ %.2f.\n", bonus);

	return 0;
}