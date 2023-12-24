#include <stdio.h>

double Power(double x, double y) {
	double result = 1;

	for (int i = 1; i <= y; i++)
		result *= x;

	return result;
}

void num19() {
	double x, y;

	printf("두 실수를 입력하세요 : ");
	scanf("%lf %lf", &x, &y);

	printf("%lf의 %lf승은 약 %lf이겠죠.\n", x, y, Power(x, y));
}