#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, m;
	int** arr = NULL;
	int i, j, k;

	printf("배열의 제1크기와 제2크기를 입력하세요 : ");
	scanf("%d %d", &n, &m);

	arr = (int**)calloc(n, sizeof(int*));
	for (i = 0; i < n; i++)
		arr[i] = (int*)calloc(m, sizeof(int));

	k = 1;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			arr[i][j] = k++;

	printf("<%d x %d크기의 배열>\n", n, m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			printf("%3d ", arr[i][j]);
		printf("\n");
	}

	for (i = 0; i < n; i++)
		free(arr[i]);
	free(arr);

	return 0;
}