//file: logic.c

#include <stdio.h>

int main(void)
{
	char null = '\0', a = 'a';
	int zero = 0, n = 10;
	double dzero = 0.0, x = 3.56;

	printf("%d\n", !zero);
	printf("%d\n", zero && x);
	printf("%d\n", dzero || null);
	printf("%d\n", n && x);
	printf("%d\n", a || null);

	return 0;

}