#include <stdio.h>
#include <string.h>

void num15() {
	char str[101] = ""; //100B ũ���� ���ڹ迭 ����. �� ����(1B) ����� ũ��� 101B.

	printf("100byte ������ ���ڿ��� �Է��ϼ���(���) : ");
	scanf(" ");
	gets(str);

	printf("���ڿ��� �������� �������� : ");
	for (int i = 100; i > -1; i--) {
		printf("%c", str[i]);
	}
	printf("\n");
}