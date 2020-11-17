//file: printwidth.c

#include <stdio.h>

int main(void)
{
	int n = 255;
	float f = 3.141592F;

	printf("%d\n", n);
	printf("%10d\n", n);
	printf("%+10d\n", n);
	printf("%-10d\n", n);
	printf("%f\n", f);
	printf("%10f\n", f);
	printf("%10.4f\n", f);
	printf("%+10.4f\n", f);
	printf("%-10.4f\n", f);

	return 0;

}