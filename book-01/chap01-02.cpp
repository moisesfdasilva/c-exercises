#include<stdio.h>

int main(){
  char name[10];
  printf("Enter name:");
  scanf("%s", name);
  printf("\nThe entered name is '%s'.\n\n", name);
  return 0;
}