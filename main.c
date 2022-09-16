#include "stdio.h"

int main() {
	char gender;
	float height;

	printf("Enter sex ");
	printf("(M as male, F as female) : ");
	scanf("%s", &gender);

	printf("Enter height in cm : ");
	scanf("%f", &height);

	if ((gender == 'M'||'m') && height >= 180.0) {
		printf("Basketball\n");
	}

	if ((gender == 'F'||'f') && height >= 170.0) {
		printf("Volleyball\n");
	}
}
