//file:dowhile.c

#include <stdio.h>

#define MAX 10

int main(void)
{
	int input;

	do
	{
		printf("���� ���� �Ǵ� 0(����)�� �Է�: ");
		scanf_s("%d", &input);
		if (input > 0)
		{
			int sum = 0, i;
			for (i = 1; i <= input; i++)
				sum += i;
			printf("1���� %d���� ��: %d\n", input, sum);
		}
	} while (input > 0);

	puts("�����մϴ�. ");

	return 0;
}