#include<stdio.h>
#include<stdlib.h>

float avg(float a, float b) {
	return (a + b) / 2;
}

int main() {
	float num[3];

	printf("Digite a primeira nota:");
	scanf("%f", &num[0]);
	printf("Digite a segunda nota:");
	scanf("%f", &num[1]);

	num[2] = avg(num[0], num[1]);

	printf("\n A media aritmetica e %.2f\n", num[2]);

	if (num[2] >= 6)
		printf("\n  APROVADO E MEDIA %.2f\n", num[2]);
	else
		printf("\n  REPROVADO E MEDIA %.2f\n", num[2]);

	system("pause");
	return 0;
}