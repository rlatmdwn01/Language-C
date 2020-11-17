//file: scanfloat.c

#include <stdio.h>

int main(void)
{
	float piA;
	double piB;

	printf("원주율(2자리)과 원주율(5자리)를 실수로 입력하세요.\n");
	scanf_s("%f %lf", &piA, &piB);
	printf("%f %lf\n", piA, piB);

	return 0;

}