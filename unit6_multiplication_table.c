#include "stdio.h"

int main() {
	int number, i, output;

	printf("Enter your nunmber (1-12): ");
	scanf("%d", &number);

	for (i = 0; i < 12; i++) {
		output = number * (i + 1);
		printf("%2d x %2d = %3d\n", number, i + 1, output);
	}

	return 0;
}
