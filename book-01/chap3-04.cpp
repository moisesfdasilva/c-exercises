#include<stdio.h>

int main(){
  int i;

  do {
    printf("Select a fruit:\n");
    printf("\t(1)... Lemon\n");
    printf("\t(2)... Grape\n");
    printf("\t(3)... Orange\n");
    printf("\t(4)... Apple\n");
    printf("\t(5)... Pineapple\n");
    scanf("%d", &i);
  } while ((i < 1) || (i > 5));

  switch (i) {
  case 1:
    printf("\nYou selected lemon.\n");
    break;
  case 2:
    printf("\nYou selected grape.\n");
    break;
  case 3:
    printf("\nYou selected orange.\n");
    break;
  case 4:
    printf("\nYou selected apple.\n");
    break;
  case 5:
    printf("\nYou selected pineapple.\n");
    break;
  }

  return 0;
}