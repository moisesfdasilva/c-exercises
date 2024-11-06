#include<stdio.h>
#include<stdlib.h>
#include <math.h>

double hyp(int a, int b) {
	return pow(pow(a, 2) + pow(b, 2), (float) 1 / 2);
}

int main(){
  int length[2];

	printf("Digite o comprimento do primeiro lado do triangulo:");
	scanf("%d", &length[0]);
	printf("Digite o comprimento do segundo lado do triangulo:");
	scanf("%d", &length[1]);

	printf("Hipotenusa do triangulo: %.1lf\n", hyp(length[0], length[1]));

	system("pause");
	return 0;
}