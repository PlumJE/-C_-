#include <stdio.h>

void num20() {
	int a, b, c;

	printf("3개의 정수를 입력하세요 : ");
	scanf("%d %d %d", &a, &b, &c);

	printf("합계는 %d, 평균은 %lf, 최대값은 %d, 최소값은 %d\n",
		a + b + c, (a + b + c) / 3.0, a > b ? a : (b > c ? b : c), a < b ? a : (b < c ? b : c));
}