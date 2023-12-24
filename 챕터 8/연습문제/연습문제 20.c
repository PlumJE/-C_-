#include <stdio.h>

void num20() {
	double arr[5] = { 24, 31, 33, 60, 63 };
	double* parr = arr;
	double sum = 0;

	printf("배열의 각 원소는 ");
	for (int i = 0; i < 5; i++)
		printf("%lf ", *(parr + i));

	printf("이고,\n이들의 평균은 ");
	for (int i = 0; i < 5; i++)
		sum += *(parr + i);
	printf("%lf 이다.\n", sum / 5);
}