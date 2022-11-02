#include "stdio.h"

int main() {
	int num;

	do {
		printf("Enter number (between 10 and 20) : ");
		scanf("%d", &num);
	} while (num < 10 || num > 20);

	return 0;
}
