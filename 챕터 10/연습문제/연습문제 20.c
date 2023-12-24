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
	printf("첫 번째 문자열을 입력하세요 : ");
	gets(text1);
	printf("두 번째 문자열을 입력하세요 : ");
	gets(text2);

	printf("첫 번째 문자열은 두 번째 문자열 ");
	switch (Compare(text1, text2, 0)) {
	case -1:
		printf("보다 먼저입니다.");
		break;
	case 0:
		printf("과 같습니다.");
		break;
	case 1:
		printf("보다 나중입니다.");
		break;
	default:
		break;
	}
	puts("\n");
}