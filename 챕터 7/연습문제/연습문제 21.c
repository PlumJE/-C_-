#include <stdio.h>

void num21() {
	char str[51] = "";

	printf("문자열을 입력하세요 : ");
	scanf(" ");
	gets(str);

	printf("변경 후 문자열 : ");
	for (int i = 0; i < 51; i++) {
		if (str[i] != ' ')
			printf("%c", str[i]);
	}
	printf("\n");
}