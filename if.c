//file: if.c

#include <stdio.h>

int main(void)
{
	double grade;

	printf("평균평정 입력: ");
	scanf_s("%lf", &grade);

	if(grade >= 4.0)
		printf("삼성에 지원할 수 있습니다.\n");

	printf("졸업을 축하합니다.\n");

	return 0;

}