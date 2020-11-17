#include <stdio.h>

void add(double*, double, double);
void subtract(double*, double, double);

int main(void)
{
	double m, n, result = 0;
	void(*pf)(double*, double, double) = NULL;

	printf("+, -�� ������ �Ǽ� 2���� �Է��ϼ���. >> ");
	scanf_s("%lf %lf", &m, &n);

	//��Ģ ������ ����
	pf = add;
	pf(&result, m, n);
	printf("pf=%p, �Լ� add() �ּ�=%p\n", pf, add);
	printf("���ϱ� ����: %lf+%lf==%lf\n\n", m, n, result);

	pf = subtract;
	pf(&result, m, n);
	printf("pf=%p, �Լ� subtract()�ּ�=%p\n", pf, subtract);
	printf("���� ����: %lf-%lf==%lf\n\n", m, n, result);

	return 0;
}

void add(double* z, double x, double y)
{
	*z = x + y;
}
void subtract(double* z, double x, double y)
{
	*z = x - y;
}