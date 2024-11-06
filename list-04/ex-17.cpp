#include<stdio.h>
#include<stdlib.h>

float fahrenheit(float celsius) {
	return (9 * celsius / (float) 5) + 32;
}

int main(){
  float celsius;

	printf("Digite a temperatura em graus Celsius:");
	scanf("%f", &celsius);

	printf("Temperatura em Fahrenheit %.2f\n", fahrenheit(celsius));

	system("pause");
	return 0;
}