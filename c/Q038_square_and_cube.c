/* Write a program to find the square and cube of a number. */
#include <stdio.h>

int main() {
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	printf("Square of %d = %d\n", num, num * num);
	printf("Cube of %d = %d\n", num, num * num * num);

	return 0;
}
