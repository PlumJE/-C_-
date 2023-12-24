#include <stdio.h>

void num15() {
	double d;

	printf("실수를 하나 입력하세요 : ");
	scanf("%lf", &d);

	printf("%lf에 100을 곱한 값은 %lf\n", d, d * 100);
}