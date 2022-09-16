#include "stdio.h"

int main() {
	int date, month, year;

	printf("date: ");
	scanf("%2d", &date);

	printf("month: ");
	scanf("%2d", &month);

	printf("year: ");
	scanf("%4d", &year);

	printf("%02d%02d%4d", date, month, year);
}
