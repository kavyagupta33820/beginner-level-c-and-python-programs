/* Write a program using a function to find the product of two numbers. */
#include <stdio.h>

int product(int a, int b);

int main() {
	int a, b;

	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("Product = %d\n", product(a, b));

	return 0;
}

int product(int a, int b) {
	return a * b;
}
