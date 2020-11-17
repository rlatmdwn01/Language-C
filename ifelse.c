//file: ifelse.c

#include <stdio.h>

int main(void)
{
	int n;

	printf("정수입력: ");
	scanf_s("%d", &n);

	if (n % 2)
		printf("홀수");
	else
		printf("짝수");

	printf("입니다\n");

	return 0;
}