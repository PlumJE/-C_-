#include <stdio.h>

void num19() {
	int N, pactorial = 1;

	printf("정수를 입력하세요 : ");
	scanf(" %d", &N);

	for (int i = 1; i <= N; i++)
		pactorial *= i;

	printf("%d!은 %d와 같습니다.\n", N, pactorial);
}