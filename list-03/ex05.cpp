#include<stdio.h>

int main() {
	int max;

	printf("Enter the upper limit of the range (greater than zero):\n");
	scanf("%d", &max);

	for (int i = 1; i < max; i += 2)
		printf("    %d\n", i);

	return 0;
}