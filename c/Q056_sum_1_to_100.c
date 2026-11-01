/* Write a C program using a loop to find the sum of numbers from 1 to 100. Explain how it works. */
#include <stdio.h>

int main() {
	int sum = 0;

	for (int i = 1; i <= 100; i++) {
		sum = sum + i;
	}

	printf("Sum = %d\n", sum);

	return 0;
}
