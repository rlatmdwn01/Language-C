//file: scanchar.c

#include <stdio.h>

int main(void)
{
	char ch;

	printf("scanf()에서 저장할 변수명 앞에 붙이는 문자를 입력하세요.\n");
	scanf_s("%c", &ch);
	printf("%c %d\n", ch, ch);

	return 0;

}