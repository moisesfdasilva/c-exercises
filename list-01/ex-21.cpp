#include<stdio.h>

int main() {
  int a, b;

	printf("Enter the first value:");
	scanf("%d", &a);
	printf("Enter the second value:");
	scanf("%d", &b);

	printf("%d + %d = %d\n", a, b, (a + b));
	printf("%d - %d = %d\n", a, b, (a - b));
	printf("%d . %d = %d\n", a, b, (a * b));
	printf("%d / %d = ", a, b);

	if (b == 0)
		printf("indivisible\n");
	else
		printf("%.2f\n", a / (float)b);

	return 0;
}