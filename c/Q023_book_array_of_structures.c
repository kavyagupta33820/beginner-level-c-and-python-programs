/* Write a program to store and display book details using an array of structures. */
#include <stdio.h>

struct Book {
	char title[100];
	char author[50];
	float price;
};

int main() {
	struct Book b[3];

	for (int i = 0; i < 3; i++) {
		printf("\nEnter details of book %d\n", i + 1);
		printf("Enter title: ");
		scanf("%99s", b[i].title);
		printf("Enter author: ");
		scanf("%49s", b[i].author);
		printf("Enter price (in Rs.): ");
		scanf("%f", &b[i].price);
	}

	printf("\nBook Details\n");
	for (int i = 0; i < 3; i++) {
		printf("Book %d :: Title: %s, Author: %s, Price (Rs.): %.2f\n",
		       i + 1, b[i].title, b[i].author, b[i].price);
	}

	return 0;
}
