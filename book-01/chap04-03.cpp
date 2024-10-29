#include<stdio.h>
#include<string.h>

int main(){
  char str1[100], str2[100];

  printf("Enter name:");
  scanf("%s", str1);

  strcpy(str2, "You wrote this name: ");

  strcat(str2, str1);

  printf("\n%s.\n", str2);

  return 0;
}