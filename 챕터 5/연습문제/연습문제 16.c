#include <stdio.h>

void num16() {
	int choose;

	while (1) {
		printf("1. �޴�1\n2. �޴�2\n3. �޴�3\n0. ����\n>>>���� : ");
		scanf("%d", &choose);

		if (choose == 0)
			break;

		switch (choose) {
		case 1:
			printf("�޴� 1�� ���õǾ����ϴ�.\n");
			break;
		case 2:
			printf("�޴� 2�� ���õǾ����ϴ�.\n");
			break;
		case 3:
			printf("�޴� 3�� ���õǾ����ϴ�.\n");
			break;
		default:
			printf("�߸� �����ϼ̽��ϴ�.\n");
			break;
		}
	}
}