//file: integer.c

#include <stdio.h>

int main(void)
{
	short sVar = 32000;  //-32767���� 32767����
	int iVar = 2140000000; //�� 21�� ���� ���� ���� ����
	long gVar = -2140000000; //�� -21�� ���� ���� ���� ����

	unsigned short int usVar = 65000;  //0���� 65535���� ����
	unsigned int uiVar=2140000000;  //�� 0���� 42�� �������� ���� ����
	unsigned long int ugVar = 4280000000;  //�� 0���� 42�� �������� ����

	printf("���尪: %d %d %d\n", sVar, iVar, gVar);
	printf("���尪: %u %u %u\n", usVar, uiVar, ugVar);

	return 0;
}