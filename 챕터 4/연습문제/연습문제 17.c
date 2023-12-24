#include <stdio.h>

void num17() {
	int year;

	printf("연도를 입력하세요 : ");
	scanf("%d", &year);

	printf("%d년은 윤년", year);
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		puts("입니다.\n");
	else
		puts("이 아닙니다.\n");
}