//file: char.c

#include <stdio.h>

int main(void)
{
	char c1 = 'a';
	char c2 = 65;
	char c3 = '\132';

	printf("���尪(����): %c %c %c\n", c1, c2, c3);
	printf("���尪(����): %d %d %d\n", c1, c2, c3);

	return 0;

}