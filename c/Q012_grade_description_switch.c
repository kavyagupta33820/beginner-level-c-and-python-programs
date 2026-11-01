/* Write a program using a switch case to display the description of a grade (A-F). */
#include <stdio.h>

int main() {
	char grade;

	printf("Enter your grade (A-F): ");
	scanf(" %c", &grade);

	switch (grade) {
	case 'A':
	case 'a':
		printf("A = Excellent\n");
		break;
	case 'B':
	case 'b':
		printf("B = Very Good\n");
		break;
	case 'C':
	case 'c':
		printf("C = Good\n");
		break;
	case 'D':
	case 'd':
		printf("D = Average\n");
		break;
	case 'E':
	case 'e':
		printf("E = Needs Improvement\n");
		break;
	case 'F':
	case 'f':
		printf("F = Fail\n");
		break;
	default:
		printf("Error! Invalid grade entered.\n");
	}

	return 0;
}
