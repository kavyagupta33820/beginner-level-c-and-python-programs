/* Write a program to sort an array of n integers in ascending order using bubble sort. */
#include <stdio.h>

int main() {
	int n, temp;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	int arr[n];
	printf("Enter %d integers:\n", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	printf("Sorted array: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
