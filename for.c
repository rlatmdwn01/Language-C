//file: for.c

#include <stdio.h>

int main(void)
{
	int i;

	for (i = 1; i <= 10; i++)
		printf("%3d", i);

	puts("");

	return 0;
}