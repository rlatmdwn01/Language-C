//file: pointervar.c

#include <stdio.h>

int main(void)
{
	int data = 100;
	int* ptrint;

	ptrint = &data;
	printf("������ �ּҰ�: %u\n", ptrint);
	printf("������ ������ ũ��: %d\n", sizeof(ptrint));

	return 0;

}