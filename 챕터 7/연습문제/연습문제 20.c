#include <stdio.h>

void num20() {
	char str[51] = "";

	printf("문자열을 입력하세요 : ");
	scanf(" ");
	gets(str);

	if (str[0] < 'A' || 'Z' < str[0])
		str[0] -= 32;

	for (int i = 1; i < 51; i++) {
		if ('a' <= str[i] && str[i] <= 'z' && str[i - 1] == ' ')
			str[i] -= 32;
	}

	printf("변경 후 문자열 : %s\n", str);
}