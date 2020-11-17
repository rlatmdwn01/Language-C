#include <stdio.h>

//������ �迭���� ��� ���ϴ� �Լ�����
double sum(double data[][3], int, int);
//������ �迭���� ��� ����ϴ� �Լ�����
void printarray(double data[][3], int, int);

int main(void)
{
	int i = 0;
	//4X3���
	double x[][3] = { {1,2,3},{7,8,9},{4,5,6},{10,11,12} };

	int rowsize = sizeof(x) / sizeof(x[0]);
	int colsize = sizeof(x[0]) / sizeof(x[0][0]);
	printf("������ �迭�� �ڷᰪ�� ������ �����ϴ�.\n");
	printarray(x, rowsize, colsize);
	printf("������ �迭�� ���� ���� %.3lf�Դϴ�.\n",
		sum(x, rowsize, colsize));

	return 0;
}

//�迭���� ��� ���ϴ� �Լ�
double sum(double data[][3], int rowsize, int colsize)
{
	int i, j;
	double total = 0;

	for (i = 0; i < rowsize; i++)
		for (j = 0; j < colsize; j++)
			total += data[i][j];

	return total;
}

//�迭���� ��� ����ϴ� �Լ�
void printarray(double data[][3], int rowsize, int colsize)
{
	int i, j;
	for (i = 0; i < rowsize; i++)
	{
		printf("% d�� ����: ", i + 1);
		for (j = 0; j < colsize; j++)
			printf("x[%d][%d]=%5.2lf ", i, j, data[i][j]);
		printf("\n");
	}
	printf("\n");
}