#include <stdio.h>

void num18() {
	char str1[51] = "", str2[51] = "";
	char* p1 = str1, * p2 = str2;

	printf("���ڹ迭 str1�� ���ڿ��� �Է��ϼ��� : ");
	gets(str1);

	while (*p1 != 0) {
		*p2 = *p1;
		p1++;
		p2++;
	}

	printf("���ڹ迭 str2�� ���ڿ� ���� : %s\n", str2);
}