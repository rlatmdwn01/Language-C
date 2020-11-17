//file: while.c

#include <stdio.h>

#define MAX 10
int main(void)

{
	int i = 1, sum = 0;

	while (i <= MAX)
		sum += i++;

	printf("1에서 %d까지의 합은 %d입니다. \n", MAX, sum);

	return 0;

}