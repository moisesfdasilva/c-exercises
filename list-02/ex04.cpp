#include<stdio.h>
#include<stdlib.h>

float bonus(float salary, float years) {
	float percent = 0.1;

	if (years >= 5)
		percent = 0.2;

	return salary * percent;
}

int main() {
	float salary, years;

	printf("\n---Empresa XKW---\n");
	printf("Digite o salario, em reais:\n");
	scanf("%f", &salary);
	printf("Digite quanto tempo de trabalho na empresa, em anos:\n");
	scanf("%f", &years);

	printf("Bonus salarial: R$ %.2f.\n", bonus(salary, years));

	system("pause");
	return 0;
}