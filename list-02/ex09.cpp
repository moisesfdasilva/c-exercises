#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int num;

	printf("\nDigite um numero inteiro:\n");
	scanf("%d", &num);

	if (num % 2 == 0)
		printf("\n  %d\n", num * 2);
	else
		printf("\n  Numero impar.\n");

	system("pause");
	return 0;
}