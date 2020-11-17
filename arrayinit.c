#include <stdio.h>

#define SIZE 6

int main(void)
{
	int i, sum = 0;
	//배열 cpoint의 선언과 초기화
	int cpoint[] = { 99, 76, 84, 76, 68, 93 };

	//for문을 이용하여 합을 구함
	for (i = 0; i < SIZE; i++)
	{
		sum += cpoint[i];
		printf("cpoint[%d]=%d\n", i, cpoint[i]);
	}

	printf("성적의 합은 %d이고", sum);
	printf("평균은 %.2f이다.\n", (double)sum / SIZE);

	return 0;
}