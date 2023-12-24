#include <stdio.h>

void num23() {
	char str[50] = "";
	char* p = str;
	int count = 0;

	printf("문자열을 입력하세요 : ");
	gets(str);

	for (int i = 0; p[i] != 0; i++)
		if (p[i] == ' ' || p[i] == '\t' || p[i] == '\v' || p[i] == '\n' || p[i] == '\f' || p[i] == '\r')
			count++;

	printf("문자열 속 공백문자의 개수는 %d개 입니다.\n", count);
}