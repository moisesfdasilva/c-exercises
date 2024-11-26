#include<stdio.h>

int abc(int a, int b, int c) {
  int res = a;

  if (c == 1)
    res = b;

  return res;
}

int main() {
  int a, b, c;

 	printf("Enter the value of the variable 'A':");
 	scanf("%d", &a);
 	printf("Enter the value of the variable 'B':");
 	scanf("%d", &b);

  c = abc(a, b, 0);
  a = abc(a, b, 1);
  b = abc(c, b, 0);

 	printf("New value of 'A': %d\n", a);
 	printf("New value of 'B': %d\n", b);

 	return 0;
}