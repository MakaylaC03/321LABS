#include <stdio.h>

float main() {
	float height, base, area;
	printf("Enter the height of the triangle: ");
	scanf("%f", &height);
	printf("Enter the base of the triangle: ");
	scanf("%f", &base);
	area = (height * base)/2;
	printf("The area of a triangle with height: %f and base: %f  is %f\n", height, base, area);
	return (area);
}