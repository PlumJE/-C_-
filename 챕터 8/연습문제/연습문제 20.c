#include <stdio.h>

void num20() {
	double arr[5] = { 24, 31, 33, 60, 63 };
	double* parr = arr;
	double sum = 0;

	printf("�迭�� �� ���Ҵ� ");
	for (int i = 0; i < 5; i++)
		printf("%lf ", *(parr + i));

	printf("�̰�,\n�̵��� ����� ");
	for (int i = 0; i < 5; i++)
		sum += *(parr + i);
	printf("%lf �̴�.\n", sum / 5);
}