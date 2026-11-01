/* Explain how for, while and do-while loops work in C. Compare these loops based on their syntax and how they execute. Write a C program to accept an integer n and determine whether it is a palindrome. */
#include <stdio.h>

int main() {
	int i;

	printf("for loop: ");
	for (i = 1; i <= 3; i++) {
		printf("%d ", i);
	}

	printf("\nwhile loop: ");
	i = 1;
	while (i <= 3) {
		printf("%d ", i);
		i++;
	}

	printf("\ndo-while loop: ");
	i = 1;
	do {
		printf("%d ", i);
		i++;
	} while (i <= 3);

	int n, original, rem, rev = 0;
	printf("\n\nEnter an integer: ");
	scanf("%d", &n);
	original = n;

	if (n < 0) {
		printf("Not a palindrome\n");
		return 0;
	}
	while (n > 0) {
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}

	if (original == rev)
		printf("%d is a palindrome number\n", original);
	else
		printf("%d is not a palindrome number\n", original);

	return 0;
}
