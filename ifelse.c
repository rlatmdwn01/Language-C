//file: ifelse.c

#include <stdio.h>

int main(void)
{
	int n;

	printf("�����Է�: ");
	scanf_s("%d", &n);

	if (n % 2)
		printf("Ȧ��");
	else
		printf("¦��");

	printf("�Դϴ�\n");

	return 0;
}