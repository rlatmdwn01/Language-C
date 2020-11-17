//file: typeconstant.c

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	printf("char 범위: %d %d\n", CHAR_MIN, CHAR_MAX);
	printf("unsigend char 범위: %d %d\n", 0, UCHAR_MAX);

	printf("int 범위: %d %d\n", INT_MIN, INT_MAX);
	printf("unsigned short 범위: %d %u\n", 0, USHRT_MAX);

	printf("float 범위: %.10e %.10e\n", FLT_MIN, FLT_MAX);
	printf("double 범위: %.10e %.10e\n", DBL_MIN, DBL_MAX);

	return 0;

}