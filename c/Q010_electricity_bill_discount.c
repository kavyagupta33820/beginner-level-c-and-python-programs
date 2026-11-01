/* Write a program to calculate an electricity bill with a discount based on units consumed. */
#include <stdio.h>

int main() {
	int cons;
	float one, total, price;

	printf("enter the number of units consumed: ");
	scanf("%d", &cons);

	printf("enter cost of 1 unit(in ₹): ");
	scanf("%f", &price);

	if (cons >= 200) {
		printf("you are eligible for discount of 10%% \n");
		one = price * 0.9;
		total = cons * one;
		printf("your total bill is: %.2f\n", total);
	}
	else if (cons >= 150) {
		printf("you are eligible for discount of 5%% \n");
		one = price * 0.95;
		total = cons * one;
		printf("your total bill is: %.2f\n", total);
	}
	else {
		printf("you are not eligible for a discount \n");
		one = price;
		total = cons * price;
		printf("your total bill will be: %.2f\n", total);
	}

	return 0;
}
