/* Explain type conversion in C. Differentiate between implicit and explicit type conversion with suitable examples. Write a C program to calculate the average of three integers and display the result as a floating-point number. */
#include <stdio.h>

int main() {
	int a = 10;
	float b = 2.5;
	float c = a + b;
	printf("Implicit conversion: %d + %.1f = %.2f\n", a, b, c);

	int x = 5, y = 2;
	printf("Without cast: %d / %d = %d\n", x, y, x / y);
	printf("With cast:    %d / %d = %.2f\n", x, y, (float)x / y);

	int n1, n2, n3;
	float avg;
	printf("\nEnter 3 integers: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	avg = (float)(n1 + n2 + n3) / 3;
	printf("Average = %.2f\n", avg);

	return 0;
}
