#include <stdio.h>

void num17() {
	int N;
	int total = 0, odd_total = 0, even_total = 0;

	printf("정수를 입력하세요 : ");
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

	printf("1부터 %d까지의 합계는 %d, 홀수의 합계는 %d, 짝수의 합계는 %d 입니다.\n",
		N, total, odd_total, even_total);
}