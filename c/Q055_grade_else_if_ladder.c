/* Write a C program to input marks and display the grade using an else-if ladder (90 and above: A, 75-89: B, 60-74: C, below 60: D). */
#include <stdio.h>

int main() {
	int marks;

	printf("Enter marks: ");
	scanf("%d", &marks);

	if (marks >= 90) {
		printf("GRADE A\n");
	} else if (marks >= 75) {
		printf("GRADE B\n");
	} else if (marks >= 60) {
		printf("GRADE C\n");
	} else {
		printf("GRADE D\n");
	}

	return 0;
}
