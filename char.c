//file: char.c

#include <stdio.h>

int main(void)
{
	char c1 = 'a';
	char c2 = 65;
	char c3 = '\132';

	printf("저장값(문자): %c %c %c\n", c1, c2, c3);
	printf("저장값(정수): %d %d %d\n", c1, c2, c3);

	return 0;

}