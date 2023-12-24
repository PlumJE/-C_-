#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, m;
	int** arr = NULL;
	int i, j, k;

	printf("�迭�� ��1ũ��� ��2ũ�⸦ �Է��ϼ��� : ");
	scanf("%d %d", &n, &m);

	arr = (int**)calloc(n, sizeof(int*));
	for (i = 0; i < n; i++)
		arr[i] = (int*)calloc(m, sizeof(int));

	k = 1;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			arr[i][j] = k++;

	printf("<%d x %dũ���� �迭>\n", n, m);
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