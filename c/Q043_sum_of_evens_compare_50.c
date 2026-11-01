/* Write a C program that accepts an integer n from the user and uses a for loop to calculate the sum of all even numbers from 1 to n. Display the sum and state whether it is greater than 50 using an if-else statement. */
#include <stdio.h>

int main() {
	int n, sum = 0;

	printf("Enter n: ");
	scanf("%d", &n);

	for (int i = 2; i <= n; i += 2) {
		sum += i;
	}

	printf("Sum = %d\n", sum);
	if (sum > 50) {
		printf("Sum is greater than 50\n");
	} else {
		printf("Sum is not greater than 50\n");
	}

	return 0;
}
