/* Write a program to swap two numbers using a third variable (using a function). */
#include <stdio.h>

void swap(int a, int b);

int main() {
	int a, b;

	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);

	printf("Before swapping: a = %d, b = %d\n", a, b);
	swap(a, b);

	return 0;
}

void swap(int a, int b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
	printf("After swapping: a = %d, b = %d\n", a, b);
}
