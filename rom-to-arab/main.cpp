#include<stdio.h>
#include<string.h>

int conversion2() {
  char romanNumeral[60];
  int number = 0, i = 0;

  printf("\n  Digite o numero:\n");
  scanf("%s", &romanNumeral);

  switch (romanNumeral[i]) {
    case 'M':
      number += 1000;
      break;
    case 'C':
      if (romanNumeral[i + 1] == 'M') {
        number += 900;
      } else if (romanNumeral[i + 1] == 'D') {
        number += 400;
      }
      break;
    case 'X':
      break;
    case 'I':
      break;
    default:
      //ERROR
      break;
  }

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
