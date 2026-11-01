/* Write a program to calculate simple interest. */
#include <stdio.h>

int main() {
	float principal, rate, time, interest;

	printf("Enter the principal amount: ");
	scanf("%f", &principal);
	printf("Enter the rate of interest (per year): ");
	scanf("%f", &rate);
	printf("Enter the time (in years): ");
	scanf("%f", &time);

	interest = (principal * rate * time) / 100;

	printf("Simple Interest = %.2f\n", interest);
	printf("Total Amount = %.2f\n", principal + interest);

	return 0;
}
