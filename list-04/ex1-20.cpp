#include<stdio.h>
#include<stdlib.h>

float distance(float a, float b) {
  return a * b;
}

float fuel(float a, float b) {
  return a * b / (float) 12;
}

int main() {
  float t, vm;

 	printf("Digite o tempo gasto em horas:");
 	scanf("%f", &t);
 	printf("Digite a velocidade media(km/h):");
 	scanf("%f", &vm);

 	printf("Velocidade media: %.2f km/h\n", vm);
  printf("Tempo gasto na viagem: %.2f horas\n", t);
  printf("Distancia percorrida: %.2f km\n", distance(t, vm));
  printf("Quantidade de combustivel utilizada na viagem:");
  printf(" %.2f litros\n", fuel(t, vm));

  system("pause");
  return 0;
}