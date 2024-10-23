#include<stdio.h>

int main(){
  for(int i = 0; i < 5; ++i) {
    int j = 1;

    for(;;) {
      printf("%d", j);
      j++;
      if(j == 10) break;
    }
    printf("\n");
  }

  return 0;
}