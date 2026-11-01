/* Write a program using a structure to input and display student information (roll no., name, marks). */
#include <stdio.h>

struct Student {
	int rollNo;
	char name[50];
	float marks;
};

int main() {
	struct Student s;

	printf("Enter roll no.: ");
	scanf("%d", &s.rollNo);
	printf("Enter name: ");
	scanf("%49s", s.name);
	printf("Enter marks: ");
	scanf("%f", &s.marks);

	printf("\nStudent Details\n");
	printf("Roll no.: %d\n", s.rollNo);
	printf("Name: %s\n", s.name);
	printf("Marks: %.2f\n", s.marks);

	return 0;
}
