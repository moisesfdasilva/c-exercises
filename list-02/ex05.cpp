#include<stdio.h>
#include<stdlib.h>

int main(){
	int num;

	printf("\nDigite um valor inteiro:\n");
	scanf("%d", &num);

	printf("O dobro desse valor:\n%d\n", num * 2);

	system("pause");
	return 0;
}