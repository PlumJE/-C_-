#include <stdio.h>

void num18() {
	char str1[51] = "", str2[51] = "";
	char* p1 = str1, * p2 = str2;

	printf("문자배열 str1에 문자열을 입력하세요 : ");
	gets(str1);

	while (*p1 != 0) {
		*p2 = *p1;
		p1++;
		p2++;
	}

	printf("문자배열 str2에 문자열 복사 : %s\n", str2);
}