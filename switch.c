//file: switch.c

#include <stdio.h>

int main(void)
{
	double x, y, result;
	int op;

	printf("두 실수 입력: ");
	scanf_s("%lf %lf", &x, &y);
	printf("연산 종류 번호 선택 1(+), 2(-), 3(*), 4(/): ");
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
			printf("번호를 잘못 선택했습니다.\n");

	}

	return 0;
}