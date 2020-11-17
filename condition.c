//file:condition.c

#include <stdio.h>

int main(void)
{
	int a = 10, b = -5;
	printf("譆渠高: %d\n", (a > b) ? a : b);
	printf("譆歐高: %d\n", (a < b) ? a : b);
	printf("瞰渠高: %d\n", (a > 0) ? a : -a);
	printf("瞰渠高: %d\n", (b < 0) ? -b : b);

	((a % 2) == 0) ? printf("礎熱") : printf("�汝�");

	return 0;

}