/* Given a 1D array of 5 elements {12, 45, 7, 23, 18}, find the maximum, minimum, sum and average of the elements. */
#include <stdio.h>

int main() {
	int arr[5] = {12, 45, 7, 23, 18};
	int max = arr[0], min = arr[0], sum = 0;
	float avg;

	for (int i = 0; i < 5; i++) {
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
		sum = sum + arr[i];
	}
	avg = (float)sum / 5;

	printf("Maximum = %d\n", max);
	printf("Minimum = %d\n", min);
	printf("Sum = %d\n", sum);
	printf("Average = %.2f\n", avg);

	return 0;
}
