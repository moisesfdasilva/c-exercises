#include<stdio.h>

int main(){
  int num, value;
  int *p;

  num = 55;
  p = &num;
  value = *p;

  printf("\n%d\n", value);
  printf("\nMemory address -> %p\n", p);
  printf("\nValue of variable -> %d\n", *p);

  return 0;
}