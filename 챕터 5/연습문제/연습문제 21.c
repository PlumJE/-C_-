#include <stdio.h>

void num21() {
	char choose;
	char ch;
	int num;
	int N, pactorial = 1;

	while (1) {
		printf("1. 대소문자 확인\n2. 홀수 짝수 확인\n3. N팩토리얼 구하기(N!)\n0. 종료\n>>>선택 : ");
		scanf(" %c", &choose);

		if (choose == '0')
			break;

		switch (choose) {
		case '1':
			printf("영문자를 입력하세요 : ");
			scanf(" %c", &ch);

			if ('A' <= ch && ch <= 'Z')
				printf("'%c'는 대문자입니다.\n", ch);
			else if ('a' <= ch && ch <= 'z')
				printf("'%c'는 소문자입니다.\n", ch);
			else
				printf("'%c'는 영문자가 아닙니다.\n", ch);
			break;
		case '2':
			printf("정수를 입력하세요 : ");
			scanf(" %d", &num);

			switch (num % 2)
			{
			case 0:
				printf("%d는 짝수입니다.\n", num);
				break;
			case 1:
				printf("%d는 홀수입니다.\n", num);
				break;
			default:
				printf("%d는 짝수도 홀수도 아닙니다.\n", num);
				break;
			}
			break;
		case '3':
			printf("정수를 입력하세요 : ");
			scanf(" %d", &N);

			for (int i = 1; i <= N; i++)
				pactorial *= i;

			printf("%d!은 %d입니다.\n", N, pactorial);
			break;
		default:
			printf("잘못 선택하셨습니다.\n");
			break;
		}
	}
}