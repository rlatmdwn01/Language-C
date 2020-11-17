//file: association.c

#include <stdio.h>
int main(void)
{
	int n = 10, m = 5;

	//우측에서 좌측으로 결합
	printf("%d ", n += m /= 3);
	n = 10; m = 5;
	printf("%d\n", (n += (m /= 3)));

	//좌측에서 우측으로 결합
	printf("%d ", 10 * 3 / 2);
	printf("%d ", (10 * 3) / 2);
	printf("%d\n", 10 * (3 / 2));

	return 0;

}