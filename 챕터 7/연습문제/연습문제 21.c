#include <stdio.h>

void num21() {
	char str[51] = "";

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf(" ");
	gets(str);

	printf("���� �� ���ڿ� : ");
	for (int i = 0; i < 51; i++) {
		if (str[i] != ' ')
			printf("%c", str[i]);
	}
	printf("\n");
}