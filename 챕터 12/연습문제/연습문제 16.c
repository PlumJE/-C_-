#include <stdio.h>
#include <stdlib.h>

#define ISLOWER(C) (97 <= C && C <= 122) ? 1 : 0
#define ISUPPER(C) (65 <= C && C <= 90) ? 1 : 0
#define STRCPY(A, B) for (int i = 0; i < sizeof(A) / sizeof(char); i++) if (0 <= B[i] && B[i] <= 31) A[i] = '\0'; else A[i] = B[i];
#define STRCAT(A, B) char *i = A, *j = B; while (*i) i++; for ( ; *j; i++, j++) (*i) = (*j);

void num16() {
	char letter;
	char str1[1000], str2[1000], result[1000];

	//islower�Լ� ��
	printf("���ڸ� �Է��ϼ��� : ");
	scanf(" %c", &letter);

	printf("%c�� �ҹ���", letter);
	if (islower(letter))
		printf("�Դϴ�.");
	else
		printf("�� �ƴմϴ�.");
	printf("(���̺귯�� �Լ��� �Ǵ�)\n");

	printf("%c�� �ҹ���", letter);
	if (ISLOWER(letter))
		printf("�Դϴ�.");
	else
		printf("�� �ƴմϴ�.");
	printf("(��ũ�� �Լ��� �Ǵ�)\n");

	//isupper�Լ� ��
	printf("���ڸ� �Է��ϼ��� : ");
	scanf(" %c", &letter);

	printf("%c�� �빮��", letter);
	if (isupper(letter))
		printf("�Դϴ�.");
	else
		printf("�� �ƴմϴ�.");
	printf("(���̺귯�� �Լ��� �Ǵ�)\n");

	printf("%c�� �빮��", letter);
	if (ISUPPER(letter))
		printf("�Դϴ�.");
	else
		printf("�� �ƴմϴ�.");
	printf("(��ũ�� �Լ��� �Ǵ�)\n");

	//strcpy�Լ� ��
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf(" %s", str1);

	strcpy(str2, str1);
	printf("���ڿ� ���� ��� : %s(���̺귯�� �Լ�)\n", str2);
	STRCPY(str2, str1);
	printf("���ڿ� ���� ��� : %s(��ũ�� �Լ�)\n", str2);

	//strcat�Լ� ��
	printf("ù ��° ���ڿ� �Է� : ");
	scanf(" %s", str1);
	printf("�� ��° ���ڿ� �Է� : ");
	scanf(" %s", str2);

	strcpy(result, str1);
	strcat(result, str2);
	printf("���ڿ� ���� ��� : %s(���̺귯�� �Լ�)\n", result);
	strcpy(result, str1);
	STRCAT(result, str2);
	printf("���ڿ� ���� ��� : %s(��ũ�� �Լ�)\n", result);
}