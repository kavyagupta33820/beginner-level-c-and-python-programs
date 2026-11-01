/* Explain file handling in C and its key functions. Write a program to write data to a file and then read it. */
#include <stdio.h>

int main() {
	FILE *fp;
	char name[50];
	int age;

	fp = fopen("data.txt", "w");
	if (fp == NULL) {
		printf("File cannot be opened!\n");
		return 1;
	}
	printf("Enter name and age: ");
	scanf("%49s %d", name, &age);
	fprintf(fp, "%s %d\n", name, age);
	fclose(fp);

	fp = fopen("data.txt", "r");
	if (fp == NULL) {
		printf("File cannot be opened!\n");
		return 1;
	}
	fscanf(fp, "%49s %d", name, &age);
	fclose(fp);

	printf("\nData from file:\n");
	printf("Name: %s, Age: %d\n", name, age);

	return 0;
}
