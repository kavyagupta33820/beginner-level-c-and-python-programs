/* Write a program to print all prime numbers between 1 and n using an appropriate loop. */
#include <stdio.h>

int main() {
	int n, isPrime;

	printf("Enter n: ");
	scanf("%d", &n);

	printf("Prime numbers between 1 and %d:\n", n);
	for (int num = 2; num <= n; num++) {
		isPrime = 1;
		for (int i = 2; i * i <= num; i++) {
			if (num % i == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime) {
			printf("%d ", num);
		}
	}
	printf("\n");

	return 0;
}
