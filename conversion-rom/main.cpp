#include<stdio.h>
#include<string.h>

int conversion1() {
  int number;
  char converted[60];
  int i = 0;
  printf("\n  Digite o numero: ");
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

  printf("\n    %s\n", converted);

  return 0;
}

int conversion2() {
  char romanNumeral[60];
  int number = 0;
  char previous = '0';

  printf("\n  Digite o numero em algarismo romano: ");
  scanf("%c", &romanNumeral);

  for(int i = 0; i < (int) strlen(romanNumeral); i++) {
    switch (romanNumeral[i]) {
      case 'M':
        if (previous == 'C') {
          number += 800;
        } else if (previous == '0' || previous == 'M') {
          number += 1000;
        } else {
          printf("ERROR(M)\n");
        }
        break;
      case 'D':
        if (previous == 'C') {
          number += 300;
        } else if (previous == '0' || previous == 'M') {
          number += 500;
        } else {
          printf("ERROR(D)\n");
        }
        break;
      case 'C':
        if (previous == 'X') {
          number += 80;
        } else if (previous == '0' || previous == 'M' || previous == 'D' || previous == 'C') {
          number += 100;
        } else {
          printf("ERROR(C)\n");
        }
        break;
      case 'L':
        if (previous == 'X') {
          number += 30;
        } else if (previous == '0' || previous == 'M' || previous == 'D' || previous == 'C') {
          number += 50;
        } else {
          printf("ERROR(L)");
        }
        break;
      case 'X':
        if (previous == 'I') {
          number += 8;
        } else if (previous == '0' || previous == 'M' || previous == 'D' || previous == 'C' || previous == 'L' || previous == 'X') {
          number += 10;
        } else {
          printf("ERROR(X)");
        }
        break;
      case 'V':
        if (previous == 'I') {
          number += 3;
        } else if (previous == '0' || previous == 'M' || previous == 'D' || previous == 'C' || previous == 'L' || previous == 'X') {
          number += 5;
        } else {
          printf("ERROR(V)");
        }
        break;
      case 'I':
        if (previous == '0' || previous == 'M' || previous == 'D' || previous == 'C' || previous == 'L' || previous == 'X' || previous == 'V' || previous == 'I') {
          number += 1;
        } else {
          printf("ERROR(I)");
        }
        break;
      default:
        printf("ERROR");
        break;
    }

    previous = romanNumeral[i];

  }

  printf("    %d\n", number);

  return 0;
}

int main() {
	int option;

	do {
    printf("\nEscolha a opção desejada:\n");
    printf("\n  (1) Converter numero padrao para algarismo romano.\n");
    printf("\n  (2) Converter numero em algarismo romano para padrao.\n");
    printf("\n  (0) Sair.\n");
    scanf("%d", &option);

    switch (option) {
      case 0:
        printf("\n  ...saindo...\n");
        break;
      case 1:
        option = conversion1();
        break;
      case 2:
        option = conversion2();
        break;
      default:
        printf("\n  Escolha uma opcao valida.\n");
        break;
    }
  } while(option != 0);

	return 0;
}
