#include<stdio.h>
#include<string.h>

int main(){
  char names[4][8] = { "moses", "moshe", "Moses", "Moshe" };
  int i, j;

  for(i = 0; i < 4; i++) {
    printf("  %s\n", names[i]);
  }

  int mtrx[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

  for(i = 0; i < 3; i++) {
    for(j = 0; j < 4; j++) {
      printf("   %d", mtrx[i][j]);
    }
    printf("\n");
  }

  return 0;
}