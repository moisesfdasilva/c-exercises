#include<stdio.h>

int main(){
  int num[100];
  int count = 0;
  int totalnums;

  do {
    printf("\nEnter number (-999 to exit):");
    scanf("%d", &num[count]);
    count++;
  } while (num[count-1] != -999);

  totalnums = count - 1;

  printf("\n\n\n Numbers:\n");

  for (count = 0; count < totalnums; count++)
    printf(" %d", num[count]);

  printf("\n");

  return 0;
}