#include <stdio.h>

void num18() {
	char str[50] = "";

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf(" ");
	gets(str);

	for (int i = 0; i < 50; i++) {
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] -= 32;
	}

	printf("���� �� ���ڿ� : %s\n", str);
}