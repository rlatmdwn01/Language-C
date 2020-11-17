//file: scanf2.c

#include <stdio.h>
int main(void)
{
	int height, weight;

	printf("당신의 키와 몸무게는? ");
	scanf_s("%d%d", &height, &weight);
	printf("키: %d 몸무게: %d\n", height, weight);

	return 0;

}