#include <stdio.h>

void num21() {
	char choose;
	char ch;
	int num;
	int N, pactorial = 1;

	while (1) {
		printf("1. ��ҹ��� Ȯ��\n2. Ȧ�� ¦�� Ȯ��\n3. N���丮�� ���ϱ�(N!)\n0. ����\n>>>���� : ");
		scanf(" %c", &choose);

		if (choose == '0')
			break;

		switch (choose) {
		case '1':
			printf("�����ڸ� �Է��ϼ��� : ");
			scanf(" %c", &ch);

			if ('A' <= ch && ch <= 'Z')
				printf("'%c'�� �빮���Դϴ�.\n", ch);
			else if ('a' <= ch && ch <= 'z')
				printf("'%c'�� �ҹ����Դϴ�.\n", ch);
			else
				printf("'%c'�� �����ڰ� �ƴմϴ�.\n", ch);
			break;
		case '2':
			printf("������ �Է��ϼ��� : ");
			scanf(" %d", &num);

			switch (num % 2)
			{
			case 0:
				printf("%d�� ¦���Դϴ�.\n", num);
				break;
			case 1:
				printf("%d�� Ȧ���Դϴ�.\n", num);
				break;
			default:
				printf("%d�� ¦���� Ȧ���� �ƴմϴ�.\n", num);
				break;
			}
			break;
		case '3':
			printf("������ �Է��ϼ��� : ");
			scanf(" %d", &N);

			for (int i = 1; i <= N; i++)
				pactorial *= i;

			printf("%d!�� %d�Դϴ�.\n", N, pactorial);
			break;
		default:
			printf("�߸� �����ϼ̽��ϴ�.\n");
			break;
		}
	}
}