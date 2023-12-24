#include <stdio.h>

void num22() {
	char str1[51] = "", str2[51] = "";
	char* p1 = str1, * p2 = str2;
	int strlen = 0;

	getchar();
	printf("문자배열 str1에 문자열을 입력하세요(영문자로) : ");
	gets(str1);

	for (int i = 0; str1[i] != 0; i++)
		strlen++;

	for (int i = 0; i < strlen; i++)
		p2[i] = p1[strlen - 1 - i];

	printf("역순 문자열 str2 : %s\n", str2);
}