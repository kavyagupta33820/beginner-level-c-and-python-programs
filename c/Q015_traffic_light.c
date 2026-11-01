/* Write a program for a traffic light system (R/Y/G) using a switch case. */
#include <stdio.h>

int main() {
	char color;

	printf("Enter traffic light color (R for Red, Y for Yellow, G for Green): ");
	scanf(" %c", &color);

	switch (color) {
	case 'R':
	case 'r':
		printf("Stop! The light is Red.\n");
		break;

	case 'Y':
	case 'y':
		printf("Get Ready! The light is Yellow.\n");
		break;

	case 'G':
	case 'g':
		printf("Go! The light is Green.\n");
		break;

	default:
		printf("Error! Invalid color entered. Please enter R, Y, or G.\n");
	}

	return 0;
}
