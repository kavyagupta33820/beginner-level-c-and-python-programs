/* Write a program to find the power of a number using a loop. */
#include <stdio.h>

int main() {
	int base, exponent;
	long long result = 1;

	printf("Enter the base: ");
	scanf("%d", &base);
	printf("Enter the exponent: ");
	scanf("%d", &exponent);

	for (int i = 1; i <= exponent; i++) {
		result = result * base;
	}

	printf("%d to the power %d = %lld\n", base, exponent, result);

	return 0;
}
