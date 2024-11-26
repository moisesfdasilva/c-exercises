#include<stdio.h>
#include<math.h>

double hyp(int a, int b) {
	return pow(pow(a, 2) + pow(b, 2), (float) 1 / 2);
}

int main(){
  int length[2];

	printf("Enter the first length of the triangle:");
	scanf("%d", &length[0]);
	printf("Enter the second length of the triangle:");
	scanf("%d", &length[1]);

	printf("Hypotenuse of the triangle: %.1lf\n", hyp(length[0], length[1]));

	return 0;
}