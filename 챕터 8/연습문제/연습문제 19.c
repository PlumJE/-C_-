#include <stdio.h>

void num19() {
	char str1[51] = "", str2[51] = "";
	char* p1 = str1, * p2 = str2;
	int isSameStr = 1;

	printf("첫 번째 문자열을 입력하세요 : ");
	gets(str1);
	printf("두 번째 문자열을 입력하세요 : ");
	gets(str2);

	while (*p1 != '\0' && *p2 != '\0') {
		int isSameChar = *p1 - *p2;
		if (isSameChar != 0 && isSameChar != 32 && isSameChar != -32) {
			isSameStr = 0;
			break;
		}
		p1++;
		p2++;
	}

	printf("%s와(과) %s는(은) ", str1, str2);
	if (isSameStr)
		puts("같습니다.");
	else
		puts("다릅니다.");
}