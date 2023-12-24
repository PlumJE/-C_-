#include <stdio.h>

int IsLower(char letter) {
	if ('a' <= letter && letter <= 'z')
		return 1;
	else
		return 0;
}

int IsUpper(char letter) {
	if ('A' <= letter && letter <= 'Z')
		return 1;
	else
		return 0;
}

int IsAlphabetic(char letter) {
	if (IsLower(letter) || IsUpper(letter))
		return 1;
	else
		return 0;
}

void num18() {
	char letter;

	printf("문자를 입력하세요 : ");
	scanf(" %c", &letter);

	printf("%c는 ", letter);
	if (IsAlphabetic(letter)) {
		if (IsLower(letter))
			printf("소문자입니다.\n");
		else if (IsUpper(letter))
			printf("대문자입니다.\n");
	}
	else
		printf("영문자가 아닙니다.\n");
}