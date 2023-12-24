#include <stdio.h>

void num18() {
	char str[50] = "";

	printf("문자열을 입력하세요 : ");
	scanf(" ");
	gets(str);

	for (int i = 0; i < 50; i++) {
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] -= 32;
	}

	printf("변경 후 문자열 : %s\n", str);
}