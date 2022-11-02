#include "stdio.h"

int main()
{
	int num = 10;
	int *p = &num, *q = &num;

	printf("pointer variable p points to variable num at address %p\n", p);
	printf("pointer variable p points to variable num at address %p\n", q);

	printf("value of num is %d, so value of p is %d too\n", num, *p);
	printf("value of num is %d, so value of q is %d too\n", num, *q);

	return 0;
}
