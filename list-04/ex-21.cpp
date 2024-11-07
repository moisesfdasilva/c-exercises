#include<stdio.h>
#include<stdlib.h>

void calculate(int a, int b) {
  printf("%d + %d = %d\n", a, b, (a + b));
  printf("%d - %d = %d\n", a, b, (a - b));
  printf("%d . %d = %d\n", a, b, (a * b));
  printf("%d / %d = ", a, b);

  if (b == 0)
    printf("indivisivel\n");
  else
    printf("%.2f\n", a / (float) b);
}

int main(){
  int a, b;

  printf("Digite primeiro valor inteiro:");
  scanf("%d", &a);
  printf("Digite segundo valor inteiro:");
  scanf("%d", &b);

  calculate(a, b);

  system("pause");
  return 0;
}