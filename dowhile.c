//file:dowhile.c

#include <stdio.h>

#define MAX 10

int main(void)
{
	int input;

	do
	{
		printf("양의 정수 또는 0(종료)를 입력: ");
		scanf_s("%d", &input);
		if (input > 0)
		{
			int sum = 0, i;
			for (i = 1; i <= input; i++)
				sum += i;
			printf("1에서 %d까지 합: %d\n", input, sum);
		}
	} while (input > 0);

	puts("종료합니다. ");

	return 0;
}