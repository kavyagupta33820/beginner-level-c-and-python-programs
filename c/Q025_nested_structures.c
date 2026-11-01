/* Write a program to show nested structures (a person's name and date of birth). */
#include <stdio.h>

struct DOB {
	int day, month, year;
};

struct Person {
	char name[50];
	struct DOB d;
};

int main() {
	struct Person p;

	printf("Enter name: ");
	scanf("%49s", p.name);
	printf("Enter birthday (DD MM YYYY): ");
	scanf("%d %d %d", &p.d.day, &p.d.month, &p.d.year);

	printf("\nDetails:\n");
	printf("Name: %s\n", p.name);
	printf("DOB: %02d/%02d/%d\n", p.d.day, p.d.month, p.d.year);

	return 0;
}
