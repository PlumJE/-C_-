#include <stdio.h>

void num22() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int key = -1, value;

	printf("�迭 ������ ã���� ���� �Է��ϼ��� : ");
	scanf(" %d", &value);

	for (key = 0; key < 10; key++) {
		if (arr[key] == value)
			break;
	}
	if (key != -1)
		printf("%d�� �迭 arr���� ã�� �� �����ϴ�.\n", value);
	else
		printf("%d�� ��ġ(�ε���)�� %d�Դϴ�.\n", value, key);
}