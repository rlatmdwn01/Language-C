//file: switch.c

#include <stdio.h>

int main(void)
{
	double x, y, result;
	int op;

	printf("�� �Ǽ� �Է�: ");
	scanf_s("%lf %lf", &x, &y);
	printf("���� ���� ��ȣ ���� 1(+), 2(-), 3(*), 4(/): ");
	scanf_s("%d", &op);

	switch (op) {
		case 1:
			printf("%.2f + %.2f= %.2f\n", x, y, x + y);
			break;

		case 2:
			printf("%.2f - %2.f = %.2f\n", x, y, x - y);
			break;
		
		case 3:
			printf("%.2f * %2.f = %.2f\n", x, y, x * y);
			break;

		case 4:
			printf("%.2f / %2.f = %.2f\n", x, y, x / y);
			break;

		default:
			printf("��ȣ�� �߸� �����߽��ϴ�.\n");

	}

	return 0;
}