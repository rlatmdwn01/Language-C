//file: escape.c

#include <stdio.h>

int main(void)
{
	char sq = '\'';

	printf("BCPL\tB\tC\tJava\n");
	printf("%c\7\n", '\a');
	printf("%c�ڹ� ���'\n", sq);
	printf("\"C���\" ���� ����ִ�!\n");

	return 0;
}