#include<stdio.h>

int sum(int a, int b) {
  return a + b;
}

int sub(int a, int b) {
  return a - b;
}

int mul(int a, int b) {
  return a * b;
}

float div1(int a, int b) {
  float res = 0;

  if (b != 0)
		res = a / (float) b;

  return res;
}

int main() {
  int a, b;

  printf("Enter the first value:");
  scanf("%d", &a);
  printf("Enter the second value:");
  scanf("%d", &b);

  printf("%d + %d = %d\n", a, b, sum(a, b));
  printf("%d - %d = %d\n", a, b, sub(a, b));
  printf("%d . %d = %d\n", a, b, mul(a, b));
  printf("%d / %d = %.2f\n", a, b, div1(a, b));

  return 0;
}