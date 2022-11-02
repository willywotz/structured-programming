#include "stdio.h"

int main() {
	int number, count = 0;
	float sum = 0, average;

	printf("Enter number : ");
	scanf("%d", &number);

	while (number >= 0) {
		sum += number;
		count++;
		printf("Enter number : ");
		scanf("%d", &number);
	}

	average = sum / count;
	printf("Average is %.2f", average);

	return 0;
}
