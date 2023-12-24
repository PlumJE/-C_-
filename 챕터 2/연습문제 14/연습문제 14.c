#include <stdio.h>

void num14() {
	int x, y;

	printf("정수 두 개를 입력하세요 : ");
	scanf("%d %d", &x, &y);

	printf("두 수의 합은 %d, 차는 %d\n", x + y, x - y);
	return 0;
}