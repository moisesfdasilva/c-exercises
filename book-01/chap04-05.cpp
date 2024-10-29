#include<stdio.h>
#include<string.h>

int main(){
  char str1[4] = "abc", str2[4] = "abb", str3[4] = "abc";

  if (strcmp(str1, str2))
    printf("str1 != str2\n");
  else
    printf("str1 == str2\n");

  if (strcmp(str1, str3))
    printf("str1 != str3\n");
  else
    printf("str1 == str3\n");

  if (strcmp(str2, str3))
    printf("str2 != str3\n");
  else
    printf("str2 == str3\n");

  return 0;
}