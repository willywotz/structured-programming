#include "stdio.h"

int main() {
	int year;
	printf("Enter your study year : ");
	scanf("%d", &year);

	switch (year) {
	case 1 : printf("Freshman\n"); break;
	case 2 : printf("Sophomore\n"); break;
	case 3 : printf("Junior\n"); break;
	case 4 : printf("Senior\n"); break;
	default: printf("Super\n");
	}

	return 0;
}
