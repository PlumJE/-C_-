#include <stdio.h>

void num22() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int key = -1, value;

	printf("배열 내에서 찾으실 값을 입력하세요 : ");
	scanf(" %d", &value);

	for (key = 0; key < 10; key++) {
		if (arr[key] == value)
			break;
	}
	if (key != -1)
		printf("%d를 배열 arr에서 찾을 수 없습니다.\n", value);
	else
		printf("%d의 위치(인덱스)는 %d입니다.\n", value, key);
}