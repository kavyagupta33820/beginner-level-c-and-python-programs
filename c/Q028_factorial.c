/* Write a program to find the factorial of a number. */
#include <stdio.h>

int main() {
	int n;
	long long fact = 1;

	printf("Enter a number: ");
	scanf("%d", &n);

	if (n < 0) {
		printf("Factorial is not defined for negative numbers.\n");
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		fact = fact * i;
	}

	printf("Factorial of %d = %lld\n", n, fact);

	return 0;
}
