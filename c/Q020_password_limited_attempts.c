/* Write a program for a password check with a limited number of attempts (3). */
#include <stdio.h>

int main() {
	int password = 5432, input, attempt;

	for (attempt = 1; attempt <= 3; attempt++) {
		printf("Enter password (attempt %d/3): ", attempt);
		scanf("%d", &input);

		if (input == password) {
			printf("Access Granted\n");
			break;
		}
		printf("Wrong password.\n");
	}

	if (attempt > 3) {
		printf("Access Denied\n");
	}

	return 0;
}
