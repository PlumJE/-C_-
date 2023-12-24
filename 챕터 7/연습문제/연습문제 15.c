#include <stdio.h>
#include <string.h>

void num15() {
	char str[101] = ""; //100B 크기의 문자배열 변수. 널 문자(1B) 고려해 크기는 101B.

	printf("100byte 이하의 문자열을 입력하세요(영어만) : ");
	scanf(" ");
	gets(str);

	printf("문자열을 역순으로 뒤집으면 : ");
	for (int i = 100; i > -1; i--) {
		printf("%c", str[i]);
	}
	printf("\n");
}