#include <stdio.h>

void num21() {
	int arr[10] = { 15,23,7,78,34,67,45,36,90,71 };
	int* parr = arr;
	int increase = 0;

	printf("[ 원본  배열 ] ");
	for (int i = 0; i < 10; i++)
		printf("%d ", parr[i]);
	printf("\n");

	printf("증가량을 입력하세요 : ");
	scanf(" %d", &increase);
	for (int i = 0; i < 10; i++)
		parr[i] += increase;

	printf("[ 증가후 배열 ] ");
	for (int i = 0; i < 10; i++)
		printf("%d ", parr[i]);
	printf("\n");
}