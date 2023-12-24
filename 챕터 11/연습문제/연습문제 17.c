#include <stdio.h>
#include <stdlib.h>

int* GetSubSum(int** arr, int length) {
	int* subsum = (int*)calloc(length, sizeof(int));

	for (int i = 0; i < length; i++)
		for (int j = 0; j < 10; j++)
			subsum[i] += arr[i][j];

	return subsum;
}

void num17() {
	int length;

	printf("������ �迭�� �� 1ũ�⸦ �Է��ϼ��� : ");
	scanf("%d", &length);

	int** arr;
	arr = (int**)calloc(length, sizeof(int*));
	arr[0] = (int*)calloc(length * 10, sizeof(int));
	for (int i = 1; i < length; i++)
		arr[i] = arr[i - 1] + 10;

	for (int i = 0; i < length; i++)
		for (int j = 0; j < 10; j++)
			arr[i][j] = 10 * i + j;

	int* subsum;
	subsum = (int*)calloc(length, sizeof(int));
	subsum = GetSubSum(arr, length);

	printf("������ �迭�� �κ��յ��� : ");
	for (int i = 0; i < length; i++)
		printf("%d ", subsum[i]);
	printf("\n\n");

	free(arr[0]);
	free(arr);
	free(subsum);
	arr = NULL;
	subsum = NULL;
}