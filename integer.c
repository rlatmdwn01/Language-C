//file: integer.c

#include <stdio.h>

int main(void)
{
	short sVar = 32000;  //-32767에서 32767까지
	int iVar = 2140000000; //약 21억 정도 까지 저장 가능
	long gVar = -2140000000; //약 -21억 정도 까지 저장 가능

	unsigned short int usVar = 65000;  //0에서 65535까지 가능
	unsigned int uiVar=2140000000;  //약 0에서 42억 정도까지 저장 가능
	unsigned long int ugVar = 4280000000;  //약 0에서 42억 정도까지 가능

	printf("저장값: %d %d %d\n", sVar, iVar, gVar);
	printf("저장값: %u %u %u\n", usVar, uiVar, ugVar);

	return 0;
}