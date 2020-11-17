//file: scanf.c

#include <stdio.h>

int main(void)
{
	int year = 0;

	printf("당신의 입학년도는? ");
	scanf_s("%d", &year);
	printf("입학년도: %d\n", year);

	return 0;
}