/* Write a program to check whether a number is an Armstrong number. */
#include <stdio.h>

int main() {
	int n, original, rem, digits = 0, sum = 0, temp;

	printf("Enter a number: ");
	scanf("%d", &n);
	original = n;

	temp = n;
	while (temp > 0) {
		digits++;
		temp = temp / 10;
	}

	temp = n;
	while (temp > 0) {
		rem = temp % 10;
		int power = 1;
		for (int i = 0; i < digits; i++) {
			power = power * rem;
		}
		sum = sum + power;
		temp = temp / 10;
	}

	if (sum == original)
		printf("%d is an Armstrong number.\n", original);
	else
		printf("%d is not an Armstrong number.\n", original);

	return 0;
}
