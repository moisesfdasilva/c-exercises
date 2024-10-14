#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main(){
  int length1, length2, hyp;

	printf("Digite o comprimento do primeiro lado do triangulo:");
	scanf("%d", &length1);
	printf("Digite o comprimento do segundo lado do triangulo:");
	scanf("%d", &length2);

  hyp = pow(length1, 2) + pow(length2, 2);
	printf("Hipotenusa do triangulo: %d\n", hyp);

	system("pause");
	return 0;
}