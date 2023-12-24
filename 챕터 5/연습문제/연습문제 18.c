#include <stdio.h>

void num18()
{
	int num;
	char choose;

	while (1)
	{
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

		printf("계속 하시겠습니까? (Y/N) ");
		scanf(" %c", &choose);

		if (choose == 'N' || choose == 'n')
			break;
	}
}