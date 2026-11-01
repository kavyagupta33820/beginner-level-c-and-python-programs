/* Write a program to search for a number among 10 entered numbers and display its position (search operation). */
#include <stdio.h>

int main() {
	int arr[10];
	int searchNum, found = 0;

	printf("Enter 10 integers:\n");
	for (int i = 0; i < 10; i++) {
		printf("Element %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	printf("Enter the number you want to search for: ");
	scanf("%d", &searchNum);

	for (int i = 0; i < 10; i++) {
		if (arr[i] == searchNum) {
			printf("Number %d found at position %d (Index %d).\n", searchNum, i + 1, i);
			found = 1;
			break;
		}
	}

	if (!found) {
		printf("Number %d not found in the array.\n", searchNum);
	}

	return 0;
}
