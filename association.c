//file: association.c

#include <stdio.h>
int main(void)
{
	int n = 10, m = 5;

	//�������� �������� ����
	printf("%d ", n += m /= 3);
	n = 10; m = 5;
	printf("%d\n", (n += (m /= 3)));

	//�������� �������� ����
	printf("%d ", 10 * 3 / 2);
	printf("%d ", (10 * 3) / 2);
	printf("%d\n", 10 * (3 / 2));

	return 0;

}