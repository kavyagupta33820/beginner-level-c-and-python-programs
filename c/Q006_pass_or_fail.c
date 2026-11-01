/* Write a program to check whether a student has passed or failed based on marks. */
#include<stdio.h>

int main() {
	int marks,tnum,pnum;
	printf("enter marks obtained: ");
	scanf("%d",&marks);
	printf("enter total obtainable marks: ");
	scanf("%d",&tnum);
	pnum=0.33*tnum;
	if(marks>=pnum) {
		printf("You passed");
	} else {
		printf("You failed");
	}

	return 0;
}
