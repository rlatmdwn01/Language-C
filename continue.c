//file: continue.c

#include <stdio.h>

int main(void)
{
	const int MAX = 15;
	int i;

	printf("1���� %d���� ���� �߿��� 3���� ������ �������� �ʴ¼�\n", MAX);
	for (i = 1; i <= MAX; i++)
	{
		if (i % 3 == 0)
			continue;
		printf("%3d", i);
	}
	puts("");

	return 0;
}