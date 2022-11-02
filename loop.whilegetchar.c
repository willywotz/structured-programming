#include "stdio.h"
#include "conio.h"

int main() {
	char ch;

	while ((ch = getche()) != 'q');

	printf("\nfound the q\n");
	getch();

	return 0;
}
