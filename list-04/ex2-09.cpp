#include<stdio.h>

int double1(int a) {
	return a * 2;
}

int main() {
	int num;

	printf("\nEnter an integer value:\n");
	scanf("%d", &num);

	if (num % 2 == 0)
		printf("\n  %d\n", double1(num));
	else
		printf("\n  Odd number.\n");

	return 0;
}