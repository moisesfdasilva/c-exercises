#include<stdio.h>
#include<math.h>

int main() {
  float radius, volume;

	printf("Enter the radius of the sphere:");
	scanf("%f", &radius);

  volume = 4/3 * M_PI * pow(radius, 3);
	printf("Sphere volume is %.2f\n", volume);

	return 0;
}