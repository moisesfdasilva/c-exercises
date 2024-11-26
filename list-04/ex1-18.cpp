#include<stdio.h>
#include<math.h>

float volume(float rad) {
  return M_PI * pow(rad, 3) * 4 / (float) 3;
}

int main() {
  float radius;

 	printf("Enter the radius of the sphere:");
 	scanf("%f", &radius);

 	printf("Sphere volume is %.2f\n", volume(radius));

 	return 0;
}