#include <stdio.h>

int main(void)
{
	char str[256];
	char* p = str;
	int len;

	printf("���ڿ��� �Է��ϼ��� : ");
	gets(str);

	len = 0;
	while (*p != 0)
	{
		len++;
		p++;
	}

	printf("���ڿ��� ���� : %d\n", len);

	return 0;
}