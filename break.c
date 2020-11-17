//file: break.c

#include <stdio.h>

int main(void)
{
	int mult, n, i;

	for (; ;)
	{
		printf("1과 20사이의 정수 또는 종류(0) 입력: ");
		scanf_s("%d", &n);
		if (n <= 0)
			break;
		for (i = 1, mult = 1; i <= n; i++)
			mult *= i;
		printf("1에서 %d까지 곱: %d\n", n, mult);
	}
	puts("종료합니다.");

	return 0;
}