#include <stdio.h>

int main() {
	printf("1. Set 1\n");
	printf("2. Set 2\n");
	printf("3. Set 3\n");

	int number;
	printf("Select : ");
	scanf("%d", &number);

	if (number == 1) {
		printf("Set 1: Donut 1, Pepsi 1\n");
		printf("Price: 55 Bath\n");
	} else if (number == 2) {
		printf("Set 2: French Fries 1, Pepsi 2, Hamburger 2\n");
		printf("Price: 199 Bath\n");
	} else if (number == 3) {
		printf("Set 3: Chicken 2, French Fries 2, Pepsi 4\n");
		printf("Price: 239 Bath\n");
	}

	return 0;
}
