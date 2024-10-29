#include<stdio.h>
#include<string.h>

int main(){
  char names[4][8];
  int i = 0;

  strcpy(names[0], "moses");
  strcpy(names[1], "moshe");
  strcpy(names[2], "Moses");
  strcpy(names[3], "Moshe");

  while (i < 4){
    printf("  %s\n", names[i]);
    i++;
  }

  return 0;
}