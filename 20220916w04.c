#include "stdio.h"

int main() {
	int age;
	printf("Enter your age : ");
	scanf("%d", &age);

	if (age >= 60) printf("old age\n");
	else if (age >= 40) printf("adulthood\n");
	else if (age >= 13 && age <= 20) printf("teenager\n");
	else if (age >= 3 && age <= 12) printf("childhood\n");
	else if (age >= 0 && age <= 2) printf("infancy\n");

	return 0;
}
