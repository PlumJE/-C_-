#include <stdio.h>

void num16() {
	int a[3][3], b[3][3];

	printf("��� a�� ���� �Է��ϼ��� : \n");
	for (int i = 0; i < 3; i++)
		scanf(" %d %d %d", &a[i][0], &a[i][1], &a[i][2]);

	printf("��� b�� ���� �Է��ϼ��� : \n");
	for (int i = 0; i < 3; i++)
		scanf(" %d %d %d", &b[i][0], &b[i][1], &b[i][2]);

	printf("��� a + b�� ����\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			printf("%3d ", a[i][j] + b[i][j]);
		printf("\n");
	}
	printf("�Դϴ�.\n");
}