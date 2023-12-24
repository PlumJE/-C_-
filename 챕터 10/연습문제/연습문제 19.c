#include <stdio.h>

void QuickSort(int arr[], int left, int right) {
	int i = left, j = right;
	int pivot = arr[(left + right) / 2];
	int temp;
	do {
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j) {
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	} while (i <= j);

	/* recursion */
	if (left < j)
		QuickSort(arr, left, j);

	if (i < right)
		QuickSort(arr, i, right);
}

void num19() {
	int input[10];

	printf("정수형 배열을 입력하세요 : ");
	for (int i = 0; i < 10; i++)
		scanf(" %d", &input[i]);

	QuickSort(input, 0, 9);
	printf("배열을 퀵 정렬로 정렬 : ");
	for (int i = 0; i < 10; i++)
		printf("%d ", input[i]);
	puts("\n");
}