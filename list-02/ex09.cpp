#include<stdio.h>

int main() {
	int num;

	printf("\nDigite um numero inteiro:\n");
	scanf("%d", &num);

	if (num % 2 == 0)
		printf("\n  %d\n", num * 2);
	else
		printf("\n  Numero impar.\n");

	return 0;
}