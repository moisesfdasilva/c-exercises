#include<stdio.h>
#include<math.h>

int main() {
  int length1, length2, hyp;

	printf("Enter the first length of the triangle:");
	scanf("%d", &length1);
	printf("Enter the second length of the triangle:");
	scanf("%d", &length2);

  hyp = pow(pow(length1, 2) + pow(length2, 2), (float) 1 / 2);
	printf("Hypotenuse of the triangle: %d\n", hyp);

	return 0;
}