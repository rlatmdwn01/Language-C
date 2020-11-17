//file: format.c

#include <stdio.h>

int main(void)
{
	printf("%010d\n", 12345);
	printf("%+010d\n", 1234);
	printf("%0#10od\n", 1234);
	printf("%0#10xd\n", 271);
	printf("%-#10X\n", 271);
	printf("%d\n", 32768);
	printf("%hd\n", 32768);

	return 0;

}