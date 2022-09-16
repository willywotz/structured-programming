#include "stdio.h"

int main() {
	float n1, n2, n3;

	printf("Enter number 1 : ");
	scanf("%f", &n1);
	printf("Enter number 2 : ");
	scanf("%f", &n2);
	printf("Enter number 3 : ");
	scanf("%f", &n3);

	printf("%.2f\n%.2f\n%.2f\n", n1, n2, n3);

	return 0;
}
