//file: pointervar.c

#include <stdio.h>

int main(void)
{
	int data = 100;
	int* ptrint;

	ptrint = &data;
	printf("십진수 주소값: %u\n", ptrint);
	printf("포인터 변수의 크기: %d\n", sizeof(ptrint));

	return 0;

}