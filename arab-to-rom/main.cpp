#include<stdio.h>
#include<string.h>

int conversion1() {
  int number;
  char converted[60];
  int i = 0;
  printf("\n  Digite o numero:\n");
  scanf("%d", &number);

  while (number > 0) {
    if (number >= 1000) {
      converted[i] = 'M';
      number -= 1000;
      i++;
    } else if (number >= 100 && number < 1000) {
      if (number >= 900) {
        converted[i] = 'C';
        converted[i + 1] = 'M';
        number -= 900;
        i += 2;
      } else if (number < 900 && number >= 500) {
        converted[i] = 'D';
        number -= 500;
        i++;
      } else if (number < 500 && number >= 400) {
        converted[i] = 'C';
        converted[i + 1] = 'D';
        number -= 400;
        i += 2;
      } else {
        converted[i] = 'C';
        number -= 100;
        i++;
      }
    } else if (number >= 10 && number < 100) {
      if (number >= 90) {
        converted[i] = 'X';
        converted[i + 1] = 'C';
        number -= 90;
        i += 2;
      } else if (number < 90 && number >= 50) {
        converted[i] = 'L';
        number -= 50;
        i++;
      } else if (number < 50 && number >= 40) {
        converted[i] = 'X';
        converted[i + 1] = 'L';
        number -= 40;
        i += 2;
      } else {
        converted[i] = 'X';
        number -= 10;
        i++;
      }
    } else {
      if (number == 9) {
        converted[i] = 'I';
        converted[i + 1] = 'X';
        number -= 9;
        i += 2;
      } else if (number < 9 && number >= 5) {
        converted[i] = 'V';
        number -= 5;
        i++;
      } else if (number == 4) {
        converted[i] = 'I';
        converted[i + 1] = 'V';
        number -= 4;
        i += 2;
      } else {
        converted[i] = 'I';
        number -= 1;
        i++;
      }
    }
  }

  printf("\n     %s    \n", converted);

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
        option = conversion1();
        break;
      default:
        printf("\n  Escolha uma opcao valida.\n");
        break;
    }
  } while(option != 0);

	return 0;
}
