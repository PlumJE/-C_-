#include <stdio.h>

int Round(double d) {
	int sign = d < 0 ? -1 : 1;
	double value = d < 0 ? -d : d;

	if (((int)(value * 10) % 10) >= 5.0)
		d = (int)value + 1;
	else
		d = (int)value;

	return sign * d;
}

void num14() {
	double d;

	printf("�Ǽ� ���� �Է��ϼ��� : ");
	scanf("%lf", &d);

	printf("%lf�� �ݿø��ϸ� %d�Դϴ�.\n", d, Round(d));
}