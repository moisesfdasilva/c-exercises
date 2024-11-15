#include<stdio.h>
#include<math.h>

float volume(float rad) {
  return M_PI * pow(rad, 3) * 4 / (float) 3;
}

int main() {
  float radius;

 	printf("Digite o raio da esfera:");
 	scanf("%f", &radius);

 	printf("Volume da esfera %.2f\n", volume(radius));

 	return 0;
}