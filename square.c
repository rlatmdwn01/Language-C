//file: square.c

#include <stdio.h>

int main(void)
{
	int i;

	printf(" i ���� ������\n");
	printf("-----------------\n");
	for (i = 1; i <= 10; i++)
		printf("%4d %5d %7d\n", i, i * i, i * i * i);

	return 0;

}