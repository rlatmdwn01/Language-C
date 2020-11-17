#include <stdio.h>

double readarray(double[], int);
double sum(double[], int);
void printarray(double[], int);

int main(void)
{
	int i = 0;
	double data[5];

	int arraysize = sizeof(data) / sizeof(data[0]);
	printf("�Ǽ� 5���� ���� �Է��ϼ���. \n");
	readarray(data, arraysize);
	printf("\n�Է��� �ڷᰪ�� ������ �����ϴ�.\n");
	printarray(data, arraysize);
	printf("�Լ����� ���� ���� %.3f�Դϴ�.\n", sum(data, arraysize));

	return 0;
}

//�迭 ���Ұ��� ��� ǥ���Է����� �޴� �Լ�
double readarray(double data[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("data[%d]=", i);
		scanf_s("%lf", &data[i]);
	}
	return;
}

//�迭 ���Ұ��� ��� ���ϴ� �Լ�
double sum(double data[], int n)
{
	int i;
	double total = 0;
	for (i = 0; i < n; i++)
		total += data[i];
	return total;
}

//�迭 ���Ұ��� ��� ����ϴ� �Լ�
void printarray(double data[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("data[%d]=%.2lf", i, data[i]);
	printf("\n");
	return;
}