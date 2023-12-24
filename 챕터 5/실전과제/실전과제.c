#include <stdio.h>

int main(void)
{
	char ch;

	while (1)
	{
		printf("영문자를 입력하세요 : ");
		scanf(" %c", &ch);

		if (ch == '.')
			break;

		printf("'%c'는 ", ch);

		if ('A' <= ch && ch <= 'Z')
			printf("대문자입니다.\n");
		else if ('a' <= ch && ch <= 'z')
			printf("소문자입니다.\n");
		else
			printf("영문자가 아닙니다.\n");
	}

	return 0;
}