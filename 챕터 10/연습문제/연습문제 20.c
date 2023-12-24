#include <stdio.h>
#include <math.h>

int Compare(char* str1, char* str2, int caseless) {
	int result = 0;

	for (int i = 0; str1[i] || str2[i]; i++) {
		if (abs(str1[i] - str2[i]) == 32 && caseless) {
			continue;
		}
		if (str1[i] < str2[i]) {
			result = -1;
			break;
		}
		if (str1[i] > str2[i]) {
			result = 1;
			break;
		}
	}

	return result;
}

void num20() {
	char text1[50], text2[50];

	getchar();
	printf("ù ��° ���ڿ��� �Է��ϼ��� : ");
	gets(text1);
	printf("�� ��° ���ڿ��� �Է��ϼ��� : ");
	gets(text2);

	printf("ù ��° ���ڿ��� �� ��° ���ڿ� ");
	switch (Compare(text1, text2, 0)) {
	case -1:
		printf("���� �����Դϴ�.");
		break;
	case 0:
		printf("�� �����ϴ�.");
		break;
	case 1:
		printf("���� �����Դϴ�.");
		break;
	default:
		break;
	}
	puts("\n");
}