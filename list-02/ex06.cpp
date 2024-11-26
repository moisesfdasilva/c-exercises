#include<stdio.h>

int doble(int value) {
	return value * 2;
}

int main() {
	int num;

	printf("\nEnter an integer value:\n");
	scanf("%d", &num);

	printf("Twice this value is:\n%d\n", doble(num));

	return 0;
}