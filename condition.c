//file:condition.c

#include <stdio.h>

int main(void)
{
	int a = 10, b = -5;
	printf("�ִ밪: %d\n", (a > b) ? a : b);
	printf("�ּڰ�: %d\n", (a < b) ? a : b);
	printf("���밪: %d\n", (a > 0) ? a : -a);
	printf("���밪: %d\n", (b < 0) ? -b : b);

	((a % 2) == 0) ? printf("¦��") : printf("Ȧ��");

	return 0;

}