#include <stdio.h>

double readarray(double[], int);
double sum(double[], int);
void printarray(double[], int);

int main(void)
{
	int i = 0;
	double data[5];

	int arraysize = sizeof(data) / sizeof(data[0]);
	printf("실수 5개의 값을 입력하세요. \n");
	readarray(data, arraysize);
	printf("\n입력한 자료값은 다음과 같습니다.\n");
	printarray(data, arraysize);
	printf("함수에서 구한 합은 %.3f입니다.\n", sum(data, arraysize));

	return 0;
}

//배열 원소값을 모두 표준입력으로 받는 함수
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

//배열 원소값을 모두 더하는 함수
double sum(double data[], int n)
{
	int i;
	double total = 0;
	for (i = 0; i < n; i++)
		total += data[i];
	return total;
}

//배열 원소값을 모두 출력하는 함수
void printarray(double data[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("data[%d]=%.2lf", i, data[i]);
	printf("\n");
	return;
}