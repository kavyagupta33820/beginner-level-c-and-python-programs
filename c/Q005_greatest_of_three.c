/* Write a program to find the greatest of three numbers. */
#include<stdio.h>

int main() {
	int num1,num2,num3;
	printf("enter 3 numbers to check which one is the largest(please dont enter same number more than 1 time):\n");
	scanf("%d\n%d\n%d",&num1,&num2,&num3);
	if(num1>num2 && num1>num3) {
		printf("%d is the largest of three numbers",num1);
	} else if(num2>num3 && num2>num1) {
		printf("%d is the largest of the three numbers",num2);
	} else {
		printf("%d is the largest of the three numbers",num3);
	}

	return 0;
}
