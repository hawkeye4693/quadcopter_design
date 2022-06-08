#include <stdio.h>
#define PI 3.14

int main(){

	int radius;
	float area;

	printf("Enter radius of the circle: ");
	scanf("%d", &radius);

	area = PI * radius * radius;
	printf("Area of the circle = %0.3f \n", area);

	return 0;
}
