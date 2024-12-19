#include<stdio.h>
#include<string.h>

int conversion2() {
  char romanNumeral[60];
  int number = 0;
  char previous = '0';

  printf("\n  Digite o numero em algarismo romano:\n");
  scanf("%s", &romanNumeral);

  for(int i = 0; i < (int) strlen(romanNumeral); i++) {
    switch (romanNumeral[i]) {
      case 'M':
        if (previous == 'C') {
          number += 800;
        } else if (previous == '0' || previous == 'M') {
          number += 1000;
        } else {
          printf("ERROR-1 \n");
        }
        break;
      case 'D':
        if (previous == 'C') {
          number += 300;
        } else if (previous == '0' || previous == 'M') {
          number += 500;
        } else {
          printf("ERROR-2 \n");
        }
        break;
      case 'C':
        if (previous == 'X') {
          number += 80;
        } else if (previous == '0' || previous == 'M' || previous == 'D' || previous == 'C') {
          number += 100;
        } else {
          printf("ERROR-3 \n");
        }
        break;
      case 'L':
        if (previous == 'X') {
          number += 30;
        } else if (previous == '0' || previous == 'M' || previous == 'D' || previous == 'C') {
          number += 50;
        } else {
          printf("ERROR-4");
        }
        break;
      case 'X':
        if (previous == 'I') {
          number += 8;
        } else if (previous == '0' || previous == 'M' || previous == 'D' || previous == 'C' || previous == 'L' || previous == 'X') {
          number += 10;
        } else {
          printf("ERROR-5");
        }
        break;
      case 'V':
        if (previous == 'I') {
          number += 3;
        } else if (previous == '0' || previous == 'M' || previous == 'D' || previous == 'C' || previous == 'L' || previous == 'X') {
          number += 5;
        } else {
          printf("ERROR-6");
        }
        break;
      case 'I':
        if (previous == '0' || previous == 'M' || previous == 'D' || previous == 'C' || previous == 'L' || previous == 'X' || previous == 'V' || previous == 'I') {
          number += 1;
        } else {
          printf("ERROR-7");
        }
        break;
      default:
        printf("ERROR-8");
        break;
    }

    previous = romanNumeral[i];

  }

  printf("%d \n", number);

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
