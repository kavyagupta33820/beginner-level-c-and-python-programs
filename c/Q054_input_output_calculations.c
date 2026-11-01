/* Explain input and output statements in C. Write a program that accepts values from the user, performs calculations and displays the results. */
#include <stdio.h>

int main() {
	int a, b;

	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	printf("Sum = %d\n", a + b);
	printf("Difference = %d\n", a - b);
	printf("Product = %d\n", a * b);
	if (b != 0) {
		printf("Division = %.2f\n", (float)a / b);
	} else {
		printf("Division is not possible\n");
	}

	return 0;
}
