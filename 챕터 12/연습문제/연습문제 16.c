#include <stdio.h>
#include <stdlib.h>

#define ISLOWER(C) (97 <= C && C <= 122) ? 1 : 0
#define ISUPPER(C) (65 <= C && C <= 90) ? 1 : 0
#define STRCPY(A, B) for (int i = 0; i < sizeof(A) / sizeof(char); i++) if (0 <= B[i] && B[i] <= 31) A[i] = '\0'; else A[i] = B[i];
#define STRCAT(A, B) char *i = A, *j = B; while (*i) i++; for ( ; *j; i++, j++) (*i) = (*j);

void num16() {
	char letter;
	char str1[1000], str2[1000], result[1000];

	//islower함수 비교
	printf("문자를 입력하세요 : ");
	scanf(" %c", &letter);

	printf("%c는 소문자", letter);
	if (islower(letter))
		printf("입니다.");
	else
		printf("가 아닙니다.");
	printf("(라이브러리 함수로 판단)\n");

	printf("%c는 소문자", letter);
	if (ISLOWER(letter))
		printf("입니다.");
	else
		printf("가 아닙니다.");
	printf("(매크로 함수로 판단)\n");

	//isupper함수 비교
	printf("문자를 입력하세요 : ");
	scanf(" %c", &letter);

	printf("%c는 대문자", letter);
	if (isupper(letter))
		printf("입니다.");
	else
		printf("가 아닙니다.");
	printf("(라이브러리 함수로 판단)\n");

	printf("%c는 대문자", letter);
	if (ISUPPER(letter))
		printf("입니다.");
	else
		printf("가 아닙니다.");
	printf("(매크로 함수로 판단)\n");

	//strcpy함수 비교
	printf("문자열을 입력하세요 : ");
	scanf(" %s", str1);

	strcpy(str2, str1);
	printf("문자열 복사 결과 : %s(라이브러리 함수)\n", str2);
	STRCPY(str2, str1);
	printf("문자열 복사 결과 : %s(매크로 함수)\n", str2);

	//strcat함수 비교
	printf("첫 번째 문자열 입력 : ");
	scanf(" %s", str1);
	printf("두 번째 문자열 입력 : ");
	scanf(" %s", str2);

	strcpy(result, str1);
	strcat(result, str2);
	printf("문자열 연결 결과 : %s(라이브러리 함수)\n", result);
	strcpy(result, str1);
	STRCAT(result, str2);
	printf("문자열 연결 결과 : %s(매크로 함수)\n", result);
}