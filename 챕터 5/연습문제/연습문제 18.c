#include <stdio.h>

void num18()
{
	int num;
	char choose;

	while (1)
	{
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

		printf("��� �Ͻðڽ��ϱ�? (Y/N) ");
		scanf(" %c", &choose);

		if (choose == 'N' || choose == 'n')
			break;
	}
}