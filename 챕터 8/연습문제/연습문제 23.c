#include <stdio.h>

void num23() {
	char str[50] = "";
	char* p = str;
	int count = 0;

	printf("���ڿ��� �Է��ϼ��� : ");
	gets(str);

	for (int i = 0; p[i] != 0; i++)
		if (p[i] == ' ' || p[i] == '\t' || p[i] == '\v' || p[i] == '\n' || p[i] == '\f' || p[i] == '\r')
			count++;

	printf("���ڿ� �� ���鹮���� ������ %d�� �Դϴ�.\n", count);
}