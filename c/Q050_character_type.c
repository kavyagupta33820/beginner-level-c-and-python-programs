/* Write a program to check whether a character is an uppercase letter, lowercase letter, digit or special character. */
#include <stdio.h>

int main() {
	char ch;

	printf("Enter a character: ");
	scanf(" %c", &ch);

	if (ch >= 'A' && ch <= 'Z') {
		printf("%c is an uppercase letter\n", ch);
	} else if (ch >= 'a' && ch <= 'z') {
		printf("%c is a lowercase letter\n", ch);
	} else if (ch >= '0' && ch <= '9') {
		printf("%c is a digit\n", ch);
	} else {
		printf("%c is a special character\n", ch);
	}

	return 0;
}
