#include <stdio.h>

#define ROWZIZE 2
#define COLZIZE 3

int main(void)
{
	int i = 0, j = 0;

	//������ �迭 ����
	int td[ROWZIZE][COLZIZE];

	//������ �迭 ���ҿ� �� ����
	td[0][0] = 1; td[0][1] = 2; td[0][2] = 3;
	td[1][0] = 4; td[1][1] = 5; td[1][2] = 6;

	printf("for���� �̿��Ͽ� ���\n");
	for (i = 0; i < ROWZIZE; i++)
	{
		for (j = 0; j < COLZIZE; j++)
			printf("%d ", td[i][j]);
		printf("\n");
	}

	return 0;
}