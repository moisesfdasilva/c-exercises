#include<stdio.h>
#include<math.h>

int powOrRoot(int value) {
	int res, power;

	if (value > 10) {
		res = pow(value, (float) 1/2);
	} else {
		printf("\nDigite uma potencia:\n");
		scanf("%d", &power);
		res = pow(value, power);
	}

	return res;
}

int main() {
	int num;

	printf("\nDigite um numero inteiro:\n");
	scanf("%d", &num);

	printf("\n  %d\n", powOrRoot(num));

	return 0;
}