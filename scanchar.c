//file: scanchar.c

#include <stdio.h>

int main(void)
{
	char ch;

	printf("scanf()���� ������ ������ �տ� ���̴� ���ڸ� �Է��ϼ���.\n");
	scanf_s("%c", &ch);
	printf("%c %d\n", ch, ch);

	return 0;

}