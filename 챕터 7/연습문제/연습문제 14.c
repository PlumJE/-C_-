#include <stdio.h>

void num14() {
	int num[10] = { 0 };
	int num_of_pos = 0, num_of_neg = 0;

	puts("���� 10���� �Է��ϼ��� : ");
	for (int i = 0; i < 10; i++)
		scanf(" %d", &num[i]);

	for (int i = 0; i < 10; i++) {
		if (num[i] > 0)
			num_of_pos++;
		else if (num[i] < 0)
			num_of_neg++;
	}

	printf("����� ������ %d��, ������ ������ %d��, 0�� ������ %d�� �Դϴ�.\n", num_of_pos, num_of_neg, 10 - num_of_pos - num_of_neg);
}