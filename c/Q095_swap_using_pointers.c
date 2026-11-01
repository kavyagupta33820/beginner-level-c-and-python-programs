/* Write a program to swap two numbers using pointers (call by reference). */
#include <stdio.h>

void swap(int *x, int *y);

int main() {
	int a, b;

	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	printf("Before swapping: a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("After swapping: a = %d, b = %d\n", a, b);

	return 0;
}

void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
