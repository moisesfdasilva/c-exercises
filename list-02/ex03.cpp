#include<stdio.h>

int main() {
	float salary, years, bonus;

	printf("\nEmpresa XKW\n");
	printf("Digite o salario, em reais:\n");
	scanf("%f", &salary);
	printf("Digite quanto tempo de trabalho na empresa, em anos:\n");
	scanf("%f", &years);

	if (years >= 5)
		bonus = salary * 0.2;
	else
		bonus = salary * 0.1;

	printf("Bonus salarial: R$ %.2f.\n", bonus);

	return 0;
}