/* Write a program to add two distances (feet and inches) using structures. */
#include <stdio.h>

struct Distance {
	int feet;
	float inch;
};

int main() {
	struct Distance d1, d2, sum;

	printf("Enter the first distance:\n");
	printf("Enter feet: ");
	scanf("%d", &d1.feet);
	printf("Enter inches: ");
	scanf("%f", &d1.inch);

	printf("Enter the second distance:\n");
	printf("Enter feet: ");
	scanf("%d", &d2.feet);
	printf("Enter inches: ");
	scanf("%f", &d2.inch);

	sum.feet = d1.feet + d2.feet;
	sum.inch = d1.inch + d2.inch;

	while (sum.inch >= 12.0) {
		sum.inch -= 12.0;
		sum.feet++;
	}

	printf("\nTotal distance = %d feet, %.1f inches\n", sum.feet, sum.inch);

	return 0;
}
