#include <stdio.h>

void num20() {
	int a, b, c;

	printf("3���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &a, &b, &c);

	printf("�հ�� %d, ����� %lf, �ִ밪�� %d, �ּҰ��� %d\n",
		a + b + c, (a + b + c) / 3.0, a > b ? a : (b > c ? b : c), a < b ? a : (b < c ? b : c));
}