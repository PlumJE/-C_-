#include <stdio.h>

void num20() {
	int N, pactorial;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &N);

	printf("0! = 1\n");
	for (int i = 1; i <= N; i++) {
		pactorial = 1;
		for (int j = 1; j <= i; j++)
			pactorial *= j;
		printf("%d! = %d\n", i, pactorial);
	}
}