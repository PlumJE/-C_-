#include <stdio.h>

double Power(double x, double y) {
	double result = 1;

	for (int i = 1; i <= y; i++)
		result *= x;

	return result;
}

void num19() {
	double x, y;

	printf("�� �Ǽ��� �Է��ϼ��� : ");
	scanf("%lf %lf", &x, &y);

	printf("%lf�� %lf���� �� %lf�̰���.\n", x, y, Power(x, y));
}