/* WAP to find the sum of all even and odd numbers from 1 to N. */
#include <stdio.h>

int main() {
	int n, evenSum = 0, oddSum = 0;

	printf("Enter N: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0)
			evenSum += i;
		else
			oddSum += i;
	}

	printf("Sum of even numbers = %d\n", evenSum);
	printf("Sum of odd numbers = %d\n", oddSum);

	return 0;
}
