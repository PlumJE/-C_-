#include <stdio.h>

void num17() {
	int N;
	int total = 0, odd_total = 0, even_total = 0;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &N);

	int i;
	for (i = 1; i <= N; i++)
		total += i;

	i = 1;
	while (i <= N) {
		odd_total += i;
		i += 2;
	}

	i = 2;
	do {
		even_total += i;
		i += 2;
	} while (i <= N);

	printf("1���� %d������ �հ�� %d, Ȧ���� �հ�� %d, ¦���� �հ�� %d �Դϴ�.\n",
		N, total, odd_total, even_total);
}