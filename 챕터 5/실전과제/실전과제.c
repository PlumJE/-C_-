#include <stdio.h>

int main(void)
{
	char ch;

	while (1)
	{
		printf("�����ڸ� �Է��ϼ��� : ");
		scanf(" %c", &ch);

		if (ch == '.')
			break;

		printf("'%c'�� ", ch);

		if ('A' <= ch && ch <= 'Z')
			printf("�빮���Դϴ�.\n");
		else if ('a' <= ch && ch <= 'z')
			printf("�ҹ����Դϴ�.\n");
		else
			printf("�����ڰ� �ƴմϴ�.\n");
	}

	return 0;
}