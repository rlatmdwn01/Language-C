#include <stdio.h>
#define SIZE 3

int main(void)
{
	int i, sum = 0;
	int score[] = { 89,98,76 };

	printf("÷��    �ּ�    ���尪\n");
	//�迭 �̸� score�� ����� �ּҿ� ���Ұ� ����
	for (i = 0; i < SIZE; i++)
		printf("%2d %10u %6d\n", i, (score + i), *(score + i));
			puts("");

	//�迭 �̸� score�� ù ��° ������ �ּ�
	printf("score: %u\n", score);
	printf("&score[0]: %u\n", &score[0]);

	return 0;

}