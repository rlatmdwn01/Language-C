//file: break.c

#include <stdio.h>

int main(void)
{
	int mult, n, i;

	for (; ;)
	{
		printf("1�� 20������ ���� �Ǵ� ����(0) �Է�: ");
		scanf_s("%d", &n);
		if (n <= 0)
			break;
		for (i = 1, mult = 1; i <= n; i++)
			mult *= i;
		printf("1���� %d���� ��: %d\n", n, mult);
	}
	puts("�����մϴ�.");

	return 0;
}