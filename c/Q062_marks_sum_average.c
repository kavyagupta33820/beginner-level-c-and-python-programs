/* Write a program to input the marks of 5 subjects into an array and find their sum and average. */
#include <stdio.h>

int main() {
	int marks[5];
	float sum = 0, avg;

	printf("Enter marks of 5 subjects:\n");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &marks[i]);
	}

	for (int i = 0; i < 5; i++) {
		sum = sum + marks[i];
	}
	avg = sum / 5;

	printf("Sum = %.2f\n", sum);
	printf("Average = %.2f\n", avg);

	return 0;
}
