#include<stdio.h>
#include<stdlib.h>

int main(){
	float num1, num2, avg;

	printf("Digite a primeira nota:");
	scanf("%f", &num1);
	printf("Digite a segunda nota:");
	scanf("%f", &num2);

	avg = (num1+num2)/2;
	printf("\nA media aritmetica e %.2f\n", avg);

	if (avg >= 6)
		printf("\n APROVADO E MEDIA %.2f\n", avg);
	else
		printf("\n REPROVADO E MEDIA %.2f\n", avg);

	system("pause");
	return 0;
}