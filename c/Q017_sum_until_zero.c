/* Write a program to keep adding numbers until zero is entered and display the total. */
#include <stdio.h>

int main() {
	int num, sum = 0;

	printf("Enter numbers to add (enter 0 to stop):\n");
	while (1) {
		scanf("%d", &num);
		if (num == 0) {
			break;
		}
		sum += num;
	}

	printf("Total sum = %d\n", sum);

	return 0;
}
