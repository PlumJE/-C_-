#include <stdio.h>

double Absolute(double value) {
	if (value >= 0)
		return value;
	else
		return value * -1;
}

void num13() {
	double d;

	printf("실수 값을 입력하세요 : ");
	scanf("%lf", &d);

	printf("%lf의 절대값은 %lf입니다.\n", d, Absolute(d));
}