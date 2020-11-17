//file: define.c

#include <stdio.h>

#define KPOP 50000000 //정수 매크로 상수
#define PI 3.14
#define PRT printf("종료\n");

int main(void)
{
	double radius = 2.83;

	printf("한: %d\n", KPOP);
	printf("원 며적: %f\n", radius * radius * PI);
	PRT;

	return 0;
}