#include<stdio.h>
#include<string.h>

int main(){
  int size;
  char str[100];

  printf("Enter name:");
  scanf("%s", str);

  size = strlen(str);

  printf("\nLenght of name: %d.\n", size);

  return 0;
}