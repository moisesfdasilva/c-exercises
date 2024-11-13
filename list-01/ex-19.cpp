#include<stdio.h>

int main() {
  int a, b, c;

	printf("Enter the value of the variable 'A':");
	scanf("%d", &a);
	printf("Enter the value of the variable 'B':");
	scanf("%d", &b);

	c = a;
	a = b;
	b = c;

	printf("New value of 'A': %d\n", a);
	printf("New value of 'B': %d\n", b);

	return 0;
}