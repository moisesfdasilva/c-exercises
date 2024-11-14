#include<stdio.h>

float avg(float a, float b, float c, float d) {
	return (a + b + c + d) / (float) 4;
}

int main() {
	float num1, num2, num3, num4;

	printf("Digite a primeira nota:");
	scanf("%f", &num1);
	printf("Digite a segunda nota:");
	scanf("%f", &num2);
  printf("Digite a terceira nota:");
	scanf("%f", &num3);
	printf("Digite a quarta nota:");
	scanf("%f", &num4);

	if (avg(num1, num2, num3, num4) >= 7)
		printf("\nAluno Aprovado\n");
	else
		printf("\nAluno Reprovado\n");

	return 0;
}