#include <stdio.h>

int IsLeapYear(int year) {
	return (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);
}

void num15() {
	int year;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &year);

	printf("%d���� ", year);
	if (IsLeapYear(year))
		printf("�����Դϴ�.\n");
	else
		printf("����Դϴ�.\n");
}