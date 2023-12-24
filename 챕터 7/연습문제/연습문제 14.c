#include <stdio.h>

void num14() {
	int num[10] = { 0 };
	int num_of_pos = 0, num_of_neg = 0;

	puts("정수 10개를 입력하세요 : ");
	for (int i = 0; i < 10; i++)
		scanf(" %d", &num[i]);

	for (int i = 0; i < 10; i++) {
		if (num[i] > 0)
			num_of_pos++;
		else if (num[i] < 0)
			num_of_neg++;
	}

	printf("양수의 개수는 %d개, 음수의 개수는 %d개, 0의 개수는 %d개 입니다.\n", num_of_pos, num_of_neg, 10 - num_of_pos - num_of_neg);
}