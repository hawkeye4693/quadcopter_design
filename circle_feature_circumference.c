#include <stdio.h>
#define PI 3.14

int main(){

	int radius;
	float area, circumference;

	printf("Enter radius of the circle: ");
	scanf("%d", &radius);

	area = PI * radius * radius;
	printf("Area of the circle = %0.3f \n", area);

	circumference = 2 * PI * radius;
    printf("Circumference of the circle = %0.3f \n", circumference);

	return 0;
}
