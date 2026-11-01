/* Explain strings in C and the functions gets()/puts(), strlen(), strcpy() and strcmp() with examples and a complete program. */
#include <stdio.h>
#include <string.h>

int main() {
	char name[50], s1[20], s2[20];
	int len, cmp;

	printf("Enter a string: ");
	fgets(name, sizeof(name), stdin);
	name[strcspn(name, "\n")] = '\0';

	printf("You entered: ");
	puts(name);

	len = strlen(name);
	printf("Length = %d\n", len);

	strcpy(s1, "apple");
	strcpy(s2, "banana");
	printf("Copied strings: s1 = %s, s2 = %s\n", s1, s2);

	cmp = strcmp(s1, s2);
	printf("strcmp(s1, s2) = %d\n", cmp);

	return 0;
}
