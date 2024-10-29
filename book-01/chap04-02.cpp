#include<stdio.h>
#include<string.h>

int main(){
  char str1[100], str2[100], str3[100];

  printf("Enter name:");
  scanf("%s", str1);

  strcpy(str2, str1);

  strcpy(str3, "You wrote this name: ");

  printf("\n%s%s.\n", str3, str2);

  return 0;
}