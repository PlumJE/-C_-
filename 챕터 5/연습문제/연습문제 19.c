#include <stdio.h>

void num19() {
	int N, pactorial = 1;

	printf("������ �Է��ϼ��� : ");
	scanf(" %d", &N);

	for (int i = 1; i <= N; i++)
		pactorial *= i;

	printf("%d!�� %d�� �����ϴ�.\n", N, pactorial);
}