#include <stdio.h>

void num22() {
	char str1[51] = "", str2[51] = "";
	char* p1 = str1, * p2 = str2;
	int strlen = 0;

	getchar();
	printf("���ڹ迭 str1�� ���ڿ��� �Է��ϼ���(�����ڷ�) : ");
	gets(str1);

	for (int i = 0; str1[i] != 0; i++)
		strlen++;

	for (int i = 0; i < strlen; i++)
		p2[i] = p1[strlen - 1 - i];

	printf("���� ���ڿ� str2 : %s\n", str2);
}