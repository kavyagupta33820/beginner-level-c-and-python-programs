/* Write a program to count the number of digits in an integer. */
#include <stdio.h>

int main() {
	int n, count = 0;

	printf("Enter an integer: ");
	scanf("%d", &n);

	if (n < 0)
		n = -n;
	do {
		count++;
		n = n / 10;
	} while (n != 0);

	printf("Number of digits = %d\n", count);

	return 0;
}
