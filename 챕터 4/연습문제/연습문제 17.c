#include <stdio.h>

void num17() {
	int year;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &year);

	printf("%d���� ����", year);
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		puts("�Դϴ�.\n");
	else
		puts("�� �ƴմϴ�.\n");
}