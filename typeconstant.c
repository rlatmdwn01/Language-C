//file: typeconstant.c

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	printf("char ����: %d %d\n", CHAR_MIN, CHAR_MAX);
	printf("unsigend char ����: %d %d\n", 0, UCHAR_MAX);

	printf("int ����: %d %d\n", INT_MIN, INT_MAX);
	printf("unsigned short ����: %d %u\n", 0, USHRT_MAX);

	printf("float ����: %.10e %.10e\n", FLT_MIN, FLT_MAX);
	printf("double ����: %.10e %.10e\n", DBL_MIN, DBL_MAX);

	return 0;

}