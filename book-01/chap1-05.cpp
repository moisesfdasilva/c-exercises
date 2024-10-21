#include<stdio.h>

int main(){
  int num;
  printf("Enter number:");
  scanf("%d", &num);

  if (num>10) printf("\n\nThe number is greater than 10.\n");
  if (num==10) {
    printf("\n\nIt's right.\n");
    printf("The number is equal to 10.\n");
  }
  if (num<10) printf("\nThe number is less than 10.\n");

  return 0;
}