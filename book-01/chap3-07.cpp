#include<stdio.h>

int main(){
  int option;

  while (option != 5) {
    REMAKE: printf("\n\n Select option between 1 and 5:");
    scanf("%d", &option);

    if ((option > 5) || (option < 1)) goto REMAKE;

    switch (option) {
      case 1:
        printf("\n --> First option.");
        break;
      case 2:
        printf("\n --> Second option.");
        break;
      case 3:
        printf("\n --> Third option.");
        break;
      case 4:
        printf("\n --> Fourth option.");
        break;
      case 5:
        printf("\n --> Leaving.\n");
        break;
    }
  }
  

  return 0;
}