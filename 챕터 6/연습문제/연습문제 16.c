#include <stdio.h>

extern int IsLeapYear(int);

int GetDaysOfMonth(year, month) {
	switch (month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		return 31;
	case 4: case 6: case 9: case 11:
		return 30;
	case 2:
		if (IsLeapYear(year))
			return 29;
		else
			return 28;
	default:
		return 0;
		break;
	}
}

void num16() {
	int year, month;

	printf("연도과 월을 입력하세요 : ");
	scanf("%d %d", &year, &month);

	printf("%d년 %d월은 총 %d일 입니다.\n", year, month, GetDaysOfMonth(year, month));
}