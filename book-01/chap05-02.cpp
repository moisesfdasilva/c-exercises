#include<stdio.h>

int main(){
  int num, *p;

  num = 55;
  p = &num;

  printf("\nInitial value: %d\n", num);

  *p = 100;

  printf("\nFinal value: %d\n", num);

  return 0;
}