//file season.c

#include <stdio.h>

int main(void)
{
	int month;

	printf("�⵵�� ��(month)�� �Է��Ͻÿ�: ");
	scanf_s("%d", & month);

	switch (month)
	{
	case 4: case 5:
		printf("%d���� ���Դϴ�.\n", month);
		break;

	case 6: case 7: case 8:
		printf("%d���� �����Դϴ�.\n", month);
		break;

	case 9: case 10: case 11:
		printf("%d���� �����Դϴ�.\n", month);
		break;

	case 12: case 1: case 2:
		printf("%d���� �ܿ��Դϴ�.\n", month);
		break;
	}

	return 0;

}