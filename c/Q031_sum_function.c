/* WAP using a function to find the sum of two numbers. */
#include <stdio.h>

int sum(int a, int b);

int main() {
	int a, b;

	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("Sum = %d\n", sum(a, b));

	return 0;
}

int sum(int a, int b) {
	return a + b;
}
