#include "stdio.h"

int main() {
	char name[255];
	int height;

	printf("Enter name : ");
	scanf("%s", &name[0]);

	printf("Enter height (cm.) : ");
	scanf("%d", &height);

	printf("Name Height(cm.)\n");
	printf("%s %d\n", name, height);
}
