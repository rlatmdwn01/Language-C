#include <stdio.h>

#define SIZE 6

int main(void)
{
	int i, sum = 0;
	//�迭 cpoint�� ����� �ʱ�ȭ
	int cpoint[] = { 99, 76, 84, 76, 68, 93 };

	//for���� �̿��Ͽ� ���� ����
	for (i = 0; i < SIZE; i++)
	{
		sum += cpoint[i];
		printf("cpoint[%d]=%d\n", i, cpoint[i]);
	}

	printf("������ ���� %d�̰�", sum);
	printf("����� %.2f�̴�.\n", (double)sum / SIZE);

	return 0;
}