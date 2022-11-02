#include <stdio.h>

int print_star(int female, int male) {
	int i;

	for (i = 0; i < female; i++) {
		printf("*");
	}

	printf("\n");

	for (i = 0; i < male; i++) {
		printf("*");
	}

	return 0;
}

int main() {
	int female, male;
	printf("Enter amount of female : ");
	scanf("%d", &female);
	printf("Enter amount of male : ");
	scanf("%d", &male);

	print_star(female, male);

	return 0;
}
