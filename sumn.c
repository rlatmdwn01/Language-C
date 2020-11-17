//file: indefinite.c

#include<stdio.h>

int main(void)
{
	int input, sum, i, j;

	while (1)
	{
		printf("양의 정수 또는 0(종료)을 입력");
		scanf_s("%d", &input);
		if (input <= 0)
			break;
		for (i = 1; i <= input; i++) {
			for (j = 1, sum = 0; j <= i; j++)
			{
				printf("%d", j);
				j == i ? printf("=") : printf("+");
				sum += j;
			}
			printf("%d\n", sum);
		}
	}


	puts("종료합니다.");

	return 0;
}