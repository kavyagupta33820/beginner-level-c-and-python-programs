/* Discuss the various operators used in C programming and explain their applications with suitable examples. Write a C program showing their use. (Section C) */
#include <stdio.h>

int main() {
	int a = 10, b = 3;

	printf("Arithmetic: a+b=%d a-b=%d a*b=%d a/b=%d a%%b=%d\n", a + b, a - b, a * b, a / b, a % b);

	printf("Relational: a>b=%d a<b=%d a==b=%d a!=b=%d\n", a > b, a < b, a == b, a != b);

	printf("Logical: (a>5 && b<10)=%d (a<5 || b<10)=%d !(a>b)=%d\n", a > 5 && b < 10, a < 5 || b < 10, !(a > b));

	int c = 10;
	c += 5;
	printf("Assignment: c += 5 gives %d, ", c);
	c -= 3;
	printf("c -= 3 gives %d\n", c);

	int d = 5;
	d++;
	printf("Increment: d++ gives %d, ", d);
	d--;
	printf("d-- gives %d\n", d);

	int x = 5, y = 3;
	printf("Bitwise: AND=%d OR=%d XOR=%d NOT=%d <<1=%d >>1=%d\n", x & y, x | y, x ^ y, ~x, x << 1, x >> 1);

	int max = (a > b) ? a : b;
	printf("Conditional: max = %d\n", max);

	int *p = &a;
	printf("Special: sizeof(a) = %zu bytes, value through pointer = %d\n", sizeof(a), *p);

	return 0;
}
