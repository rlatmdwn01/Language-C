#include <stdio.h>

#define ROWSIZE 2
#define COLSIZE 3

int main(void)
{
int i = 0, j = 0;

	//이차원 배열 초기화
	int td[][3] = { {1},{1,2,3} };

	printf("for문을 이용하여 출력\n");
	for (i = 0; i < ROWSIZE; i++)
	{
		for (j = 0; j < COLSIZE; j++)
			printf("%d ", td[i][j]);
		printf("\n");
	}

	return 0;
}