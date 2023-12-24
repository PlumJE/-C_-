#include <stdio.h>

int IsPrime(int n) {
	for (int i = 2; i <= n - 1; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}

void num17() {
	int n;

	printf("정수를 입력하세요 : ");
	scanf("%d", &n);

	if (IsPrime(n))
		printf("%d는 소수(Prime) 입니다.\n", n);
	else
		printf("%d는 소수(Prime)가 아닙니다.\n", n);
}