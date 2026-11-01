/* Explain a 1D array (declaration, input, output, traversal) with its representation, a flowchart, a program and real-world applications. */
#include <stdio.h>

#define SIZE 5

int main() {
	int arr[SIZE];

	printf("Enter %d elements:\n", SIZE);
	for (int i = 0; i < SIZE; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}

	printf("\nElements in the array are:\n");
	for (int i = 0; i < SIZE; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	return 0;
}
