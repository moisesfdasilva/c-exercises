#include<stdio.h>
#include<math.h>

int main() {
	int num1, num2, res;

	printf("\nEnter an integer value:\n");
	scanf("%d", &num1);

	if (num1 > 10) {
		res = pow(num1, (float) 1/2);
	} else {
		printf("\nEnter a pow:\n");
		scanf("%d", &num2);
		res = pow(num1, num2);
	}

	printf("\n  %d\n", res);

	return 0;
}