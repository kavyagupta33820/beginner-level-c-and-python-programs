/* Write a program to print numbers from 1 to 100 until a number divisible by both 7 and 11 is reached. */
#include <stdio.h>

int main() {
	for (int i = 1; i <= 100; i++) {
		if (i % 7 == 0 && i % 11 == 0) {
			printf("Stopped at %d (divisible by both 7 and 11).\n", i);
			break;
		}
		printf("%d\n", i);
	}

	return 0;
}
