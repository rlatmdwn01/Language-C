//file season.c

#include <stdio.h>

int main(void)
{
	int month;

	printf("년도의 월(month)를 입력하시오: ");
	scanf_s("%d", & month);

	switch (month)
	{
	case 4: case 5:
		printf("%d월은 봄입니다.\n", month);
		break;

	case 6: case 7: case 8:
		printf("%d월은 여름입니다.\n", month);
		break;

	case 9: case 10: case 11:
		printf("%d월은 가을입니다.\n", month);
		break;

	case 12: case 1: case 2:
		printf("%d월은 겨울입니다.\n", month);
		break;
	}

	return 0;

}