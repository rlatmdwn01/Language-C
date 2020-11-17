//file: numberliterals.c

#include <stdio.h>

int main(void)
{
	puts("정수 상수의 표현과 출력");
	printf("%d\n", 30); printf("%d\n", 10);
	printf("%d\n", 030); printf("%d\n", 010);
	printf("%d\n", 0X2F); printf("%d\n", 0x1b);

	puts("실수 상수의 표현과 출력");
	printf("%f\n", 3.14); printf("%f", 2.0);
	printf("%f\n", 3.14E+2); printf("%f", 21.8e2);
	printf("%f\n", 3.14E-2); printf("%f\n", 218e-3);

	return 0;
}