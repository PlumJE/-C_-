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

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &n);

	if (IsPrime(n))
		printf("%d�� �Ҽ�(Prime) �Դϴ�.\n", n);
	else
		printf("%d�� �Ҽ�(Prime)�� �ƴմϴ�.\n", n);
}