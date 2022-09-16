#include "stdio.h"

int main() {
	int number;
	printf("Enter number (1-4): ");
	scanf("%d", &number);

	switch (number) {
	case 1 : printf("One\n"); break;
	case 2 : printf("Two\n"); break;
	case 3 : printf("Three\n"); break;
	case 4 : printf("Four\n"); break;
	default: printf("unrecognized number\n");
	}

	return 0;
}
