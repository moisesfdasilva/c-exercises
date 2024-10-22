#include<stdio.h>

int main(){
  int num;
  printf("Enter number:");
  scanf("%d", &num);

  switch (num) {
  case 8:
    printf("\nThe number is between 7 and 9.\n");
    break;
  case 9:
    printf("\nThe number is between 8 and 10.\n");
    break;
  case 10:
    printf("\nThe number is between 9 and 11.\n");
    break;
  case 11:
    printf("\nThe number is between 10 and 12.\n");
    break;
  default:
    printf("\nThe number isn't 8 or 9 or 10 or 11.\n");
    break;
  }

  return 0;
}