//file: scanfloat.c

#include <stdio.h>

int main(void)
{
	float piA;
	double piB;

	printf("������(2�ڸ�)�� ������(5�ڸ�)�� �Ǽ��� �Է��ϼ���.\n");
	scanf_s("%f %lf", &piA, &piB);
	printf("%f %lf\n", piA, piB);

	return 0;

}