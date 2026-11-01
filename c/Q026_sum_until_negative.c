/* WAP to calculate the sum of up to 5 numbers entered by the user, which terminates early and prints the total sum if a negative number is entered. */
#include <stdio.h>

int main() {
	int num, sum = 0;

	for (int i = 1; i <= 5; i++) {
		printf("Enter number %d: ", i);
		scanf("%d", &num);
		if (num < 0) {
			break;
		}
		sum = sum + num;
	}

	printf("Sum = %d\n", sum);

	return 0;
}
