#include <stdio.h>

double Absolute(double value) {
	if (value >= 0)
		return value;
	else
		return value * -1;
}

void num13() {
	double d;

	printf("�Ǽ� ���� �Է��ϼ��� : ");
	scanf("%lf", &d);

	printf("%lf�� ���밪�� %lf�Դϴ�.\n", d, Absolute(d));
}