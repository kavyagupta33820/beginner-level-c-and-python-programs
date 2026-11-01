/* Describe how break, continue and goto statements affect the flow of execution in a C program. Show how they work with suitable examples and a C program. */
#include <stdio.h>

int main() {
	int i;

	printf("Using break: ");
	for (i = 1; i <= 5; i++) {
		if (i == 4) {
			break;
		}
		printf("%d ", i);
	}

	printf("\nUsing continue: ");
	for (i = 1; i <= 5; i++) {
		if (i == 4) {
			continue;
		}
		printf("%d ", i);
	}

	printf("\nUsing goto: ");
	i = 1;
start:
	printf("%d ", i);
	i++;
	if (i <= 3) {
		goto start;
	}
	printf("\n");

	return 0;
}
