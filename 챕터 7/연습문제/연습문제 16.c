#include <stdio.h>

void num16() {
	int a[3][3], b[3][3];

	printf("행렬 a에 값을 입력하세요 : \n");
	for (int i = 0; i < 3; i++)
		scanf(" %d %d %d", &a[i][0], &a[i][1], &a[i][2]);

	printf("행렬 b에 값을 입력하세요 : \n");
	for (int i = 0; i < 3; i++)
		scanf(" %d %d %d", &b[i][0], &b[i][1], &b[i][2]);

	printf("행렬 a + b의 값은\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			printf("%3d ", a[i][j] + b[i][j]);
		printf("\n");
	}
	printf("입니다.\n");
}