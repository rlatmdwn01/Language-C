//file: scanf2.c

#include <stdio.h>
int main(void)
{
	int height, weight;

	printf("����� Ű�� �����Դ�? ");
	scanf_s("%d%d", &height, &weight);
	printf("Ű: %d ������: %d\n", height, weight);

	return 0;

}