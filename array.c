#include <stdio.h>
#define SIZE 3

int main(void)
{
	int i, sum = 0;
	int score[] = { 89,98,76 };

	printf("첨자    주소    저장값\n");
	//배열 이름 score를 사용한 주소와 원소값 참조
	for (i = 0; i < SIZE; i++)
		printf("%2d %10u %6d\n", i, (score + i), *(score + i));
			puts("");

	//배열 이름 score는 첫 번째 원소의 주소
	printf("score: %u\n", score);
	printf("&score[0]: %u\n", &score[0]);

	return 0;

}