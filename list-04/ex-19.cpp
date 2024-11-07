#include<stdio.h>
#include<stdlib.h>

int abc(int a, int b, int c) {
  int res = a;

  if (c == 1)
    res = b;

  return res;
}

int main() {
  int a, b, c;

 	printf("Digite o valor da variavel 'A':");
 	scanf("%d", &a);
 	printf("Digite o valor da variavel 'B':");
 	scanf("%d", &b);

  c = abc(a, b, 0);
  a = abc(a, b, 1);
  b = abc(c, b, 0);

 	printf("novo valor de 'A': %d\n", a);
 	printf("novo valor de 'B': %d\n", b);

 	system("pause");
 	return 0;
}