#include <stdio.h>

int IsPrime(int num) {
	for (int i = 2; i < num; i++) {
		if (num % i == 0)
			return 0;
	}
	return 1;
}

void num17() {
	int prime[100];
	int i = 0;
	int num = 1;

	while (num++) {
		if (IsPrime(num)) {
			prime[i] = num;
			i++;
		}
		if (i >= 100)
			break;
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
			printf("%3d ", prime[i * 10 + j]);
		printf("\n");
	}
}