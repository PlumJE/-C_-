#include <stdio.h>

void num15() {
	double length;

	printf("제품의 크기를 inch단위로 입력하세요 : ");
	scanf("%lf", &length);

	printf("%lf inch는 %lf cm이다.\n", length, length * 2.54);
}