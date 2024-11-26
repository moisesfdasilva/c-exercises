#include<stdio.h>

int main() {
	int num;

	printf("\nEnter an integer value:\n");
	scanf("%d", &num);

	if (num % 2 == 0)
		printf("\n  %d\n", num * 2);
	else
		printf("\n  Odd number.\n");

	return 0;
}