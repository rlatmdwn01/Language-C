//file: float.c

#include <stdio.h>

int main(void)
{
	float x = 3.14F; //float x=3.14�� ���, ��� �߻�
	double y = -3.14e3; //double ������� ũ��� float�� 2��
	long double z = 3.14E-3L; //double�� long double�� ��������� ��� 64��Ʈ

	printf("���尪: %f %f %f\n", x, y, z);

	return 0;
}