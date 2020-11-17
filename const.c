//file: const.c

#include <stdio.h>

int main(void)
{
	const double RATE = 0.056;
	const int MIN_BALANCE = 1000;

	//MIN_BALANCE=2000; //오류 발생
	printf("이자율: %f\n", RATE);
	printf("계좌 최소 잔고: %d\n", MIN_BALANCE);

	return 0;
}