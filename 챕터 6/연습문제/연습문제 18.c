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

	printf("���ڸ� �Է��ϼ��� : ");
	scanf(" %c", &letter);

	printf("%c�� ", letter);
	if (IsAlphabetic(letter)) {
		if (IsLower(letter))
			printf("�ҹ����Դϴ�.\n");
		else if (IsUpper(letter))
			printf("�빮���Դϴ�.\n");
	}
	else
		printf("�����ڰ� �ƴմϴ�.\n");
}