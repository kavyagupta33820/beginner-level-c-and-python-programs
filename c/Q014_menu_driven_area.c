/* Write a menu-driven program to find the area of a circle, square or rectangle. */
#include <stdio.h>

int main() {
	int choice;
	float radius, side, length, width, area;

	printf("Menu:\n");
	printf("1. Area of Circle\n");
	printf("2. Area of Square\n");
	printf("3. Area of Rectangle\n");
	printf("Enter your choice (1-3): ");
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		printf("Enter the radius of the circle: ");
		scanf("%f", &radius);
		area = 3.14159 * radius * radius;
		printf("Area of the circle = %.2f\n", area);
		break;

	case 2:
		printf("Enter the side length of the square: ");
		scanf("%f", &side);
		area = side * side;
		printf("Area of the square = %.2f\n", area);
		break;

	case 3:
		printf("Enter the length and width of the rectangle:\n");
		scanf("%f %f", &length, &width);
		area = length * width;
		printf("Area of the rectangle = %.2f\n", area);
		break;

	default:
		printf("Error! Invalid choice entered.\n");
	}

	return 0;
}
