#include<stdio.h>
#include<string.h>

int conversion2() {
  char romanNumeral[60];
  int number = 0, previous = 0, i = 0;

  printf("\n  Digite o numero em algarismo romano:\n");
  scanf("%s", &romanNumeral);

  switch (romanNumeral[i]) {
    case 'M':
      if (previous == 100) {
        number += 800;
      } else if (previous == 0 || previous == 1000) {
        number += 1000;
      } else {
        printf("ERROR");
      }
      break;
    case 'D':
      if (previous == 100) {
        number += 300;
      } else if (previous == 0 || previous == 1000) {
        number += 500;
      } else {
        printf("ERROR");
      }
      break;
    case 'C':
      if (previous == 10) {
        number += 80;
      } else if (previous == 0 || previous == 1000 || previous == 500 || previous == 100) {
        number += 10;
      } else {
        printf("ERROR");
      }
      break;
    case 'L':
      if (previous == 10) {
        number += 30;
      } else if (previous == 0 || previous == 1000 || previous == 500 || previous == 100) {
        number += 10;
      } else {
        printf("ERROR");
      }
      break;
    case 'X':
      if (previous == 1) {
        number += 8;
      } else if (previous == 0 || previous == 1000 || previous == 500 || previous == 100 || previous == 50 || previous == 10) {
        number += 10;
      } else {
        printf("ERROR");
      }
      break;
    case 'V':
      if (previous == 1) {
        number += 3;
      } else if (previous == 0 || previous == 1000 || previous == 500 || previous == 100 || previous == 50 || previous == 10) {
        number += 10;
      } else {
        printf("ERROR");
      }
      break;
    case 'I':
      if (previous == 0 || previous == 1000 || previous == 500 || previous == 100 || previous == 50 || previous == 10 || previous == 5 || previous == 1) {
        number += 1;
      } else {
        printf("ERROR");
      }
      break;
    default:
      printf("ERROR");
      break;
  }

  previous = romanNumeral[i];

  return 0;
}

int main() {
	int option;

	do {
    printf("\nDeseja converter um numero em algarismo romano?\n");
    printf("\n  (1) Sim.\n");
    printf("\n  (0) Nao.\n");
    scanf("%d", &option);

    switch (option) {
      case 0:
        printf("\n  ...saindo...\n");
        break;
      case 1:
        option = conversion2();
        break;
      default:
        printf("\n  Escolha uma opcao valida.\n");
        break;
    }
  } while(option != 0);

	return 0;
}
