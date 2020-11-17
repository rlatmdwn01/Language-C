//file: escape.c

#include <stdio.h>

int main(void)
{
	char sq = '\'';

	printf("BCPL\tB\tC\tJava\n");
	printf("%c\7\n", '\a');
	printf("%c자바 언어'\n", sq);
	printf("\"C언어\" 정말 재미있다!\n");

	return 0;
}