#include <stdio.h>

int IsLeapYear(int year) {
	return (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);
}

void num15() {
	int year;

	printf("연도를 입력하세요 : ");
	scanf("%d", &year);

	printf("%d년은 ", year);
	if (IsLeapYear(year))
		printf("윤년입니다.\n");
	else
		printf("평년입니다.\n");
}