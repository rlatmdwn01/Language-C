//file: scanf.c

#include <stdio.h>

int main(void)
{
	int year = 0;

	printf("����� ���г⵵��? ");
	scanf_s("%d", &year);
	printf("���г⵵: %d\n", year);

	return 0;
}