#include<stdio.h>
#include<stdlib.h>

int double1(int a) {
	return a * 2;
}

int main() {
	int num;

	printf("\nDigite um numero inteiro:\n");
	scanf("%d", &num);

	if (num % 2 == 0)
		printf("\n  %d\n", double1(num));
	else
		printf("\n  Numero impar.\n");

	system("pause");
	return 0;
}