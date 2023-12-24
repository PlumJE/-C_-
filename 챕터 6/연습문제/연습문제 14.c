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

	printf("실수 값을 입력하세요 : ");
	scanf("%lf", &d);

	printf("%lf을 반올림하면 %d입니다.\n", d, Round(d));
}