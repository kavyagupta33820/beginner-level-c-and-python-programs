/* Write a program using a structure to store details of 5 employees and display the employee with the highest salary. */
#include <stdio.h>

struct Employee {
	int id;
	char name[50];
	float salary;
};

int main() {
	struct Employee e[5];
	int highest = 0;

	for (int i = 0; i < 5; i++) {
		printf("\nEnter details of employee %d\n", i + 1);
		printf("Enter ID: ");
		scanf("%d", &e[i].id);
		printf("Enter name: ");
		scanf("%49s", e[i].name);
		printf("Enter salary: ");
		scanf("%f", &e[i].salary);

		if (e[i].salary > e[highest].salary) {
			highest = i;
		}
	}

	printf("\nEmployee with the highest salary\n");
	printf("ID: %d\n", e[highest].id);
	printf("Name: %s\n", e[highest].name);
	printf("Salary: %.2f\n", e[highest].salary);

	return 0;
}
