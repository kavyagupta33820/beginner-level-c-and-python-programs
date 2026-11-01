/* Write a simple calculator program using a switch case. */
#include <stdio.h>

int main() {
	char operator;
	double num1, num2, result;
	int a, b;

	printf("Enter an operator (+, -, *, /, %%, ^): ");
	scanf(" %c", &operator);

	switch (operator) {
	case '+':
		printf("Enter two numbers: ");
		scanf("%lf %lf", &num1, &num2);
		printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
		break;

	case '-':
		printf("Enter two numbers: ");
		scanf("%lf %lf", &num1, &num2);
		printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
		break;

	case '*':
		printf("Enter two numbers: ");
		scanf("%lf %lf", &num1, &num2);
		printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
		break;

	case '/':
		printf("Enter two numbers: ");
		scanf("%lf %lf", &num1, &num2);
		if (num2 != 0)
			printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
		else
			printf("Error! Division by zero.\n");
		break;

	case '%':
		printf("Enter two integers: ");
		scanf("%d %d", &a, &b);
		if (b != 0)
			printf("%d %% %d = %d\n", a, b, a % b);
		else
			printf("Error! Division by zero.\n");
		break;

	case '^':
		printf("Enter base and exponent (integers): ");
		scanf("%d %d", &a, &b);
		result = 1;
		for (int i = 0; i < (b > 0 ? b : -b); i++) {
			result *= a;
		}
		if (b < 0) result = 1.0 / result;
		printf("%d ^ %d = %.2lf\n", a, b, result);
		break;

	default:
		printf("Error! Operator is not correct\n");
	}

	return 0;
}
