#include<stdio.h>
#include<stdlib.h>

int main(){
  float celsius, fahrenheit;

	printf("Digite a temperatura em graus Celsius:");
	scanf("%f", &celsius);

  fahrenheit = (9 * celsius / 5) + 32;
	printf("Temperatura em Fahrenheit %.2f\n", fahrenheit);

	system("pause");
	return 0;
}