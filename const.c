//file: const.c

#include <stdio.h>

int main(void)
{
	const double RATE = 0.056;
	const int MIN_BALANCE = 1000;

	//MIN_BALANCE=2000; //���� �߻�
	printf("������: %f\n", RATE);
	printf("���� �ּ� �ܰ�: %d\n", MIN_BALANCE);

	return 0;
}