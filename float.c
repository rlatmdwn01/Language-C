//file: float.c

#include <stdio.h>

int main(void)
{
	float x = 3.14F; //float x=3.14인 경우, 경고 발생
	double y = -3.14e3; //double 저장공간 크기는 float의 2배
	long double z = 3.14E-3L; //double과 long double은 저장공간이 모두 64비트

	printf("저장값: %f %f %f\n", x, y, z);

	return 0;
}