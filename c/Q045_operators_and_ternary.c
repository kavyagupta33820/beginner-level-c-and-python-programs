/* Explain relational, logical and bitwise operators in C with suitable examples. Write a C program that accepts 2 integers and finds the larger number using the ternary operator. (Section C) */
#include <stdio.h>

int main() {
	int a = 10, b = 5;

	printf("Relational: a > b = %d, a == b = %d, a != b = %d\n", a > b, a == b, a != b);

	printf("Logical: (a > 5 && b > 15) = %d, (a > 5 || b > 15) = %d, !(a > b) = %d\n",
	       a > 5 && b > 15, a > 5 || b > 15, !(a > b));

	int x = 5, y = 3;
	printf("Bitwise: AND = %d, OR = %d, XOR = %d, NOT = %d, Left shift = %d, Right shift = %d\n",
	       x & y, x | y, x ^ y, ~x, x << 1, x >> 1);

	int n1, n2, largest;
	printf("\nEnter 2 integers: ");
	scanf("%d %d", &n1, &n2);
	largest = (n1 > n2) ? n1 : n2;
	printf("Largest = %d\n", largest);

	return 0;
}
