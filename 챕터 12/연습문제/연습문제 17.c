#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ALGORITHM 2

int compareChar(char* first, char* second) {
	if (*first < *second)
		return -1;
	else if (*first > *second)
		return 1;
	else
		return 0;
}

void num17() {
	char str[100];
	int length = 0;

	printf("문자열을 입력하세요 : ");
	gets(str);

	while (str[length] != '\0')
		++length;

	/* 선택 정렬 */
#if ALGORITHM == 1
	char tmp;

	for (int i = 0; i < length - 1; ++i)
		for (int j = i + 1; j < length; ++j)
			if (str[i] > str[j]) {
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}

	/* 퀵 정렬 */
#elif ALGORITHM == 2
	qsort(str, length, sizeof(char), compareChar);
#endif

	printf("길이 %d인 문자열을 정렬한 결과 : %s\n", length, str);
}