#include <stdio.h>

void num14()
{
	int num;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);

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
}