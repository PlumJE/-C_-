#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i, j;

	for (i = 1; i < argc; i++)
	{
		//�ҹ��ڸ� �빮�ڷ� ��ȯ
		for (j = 0; j <= sizeof(argv[i]) / sizeof(char); j++)
			if ('a' <= argv[i][j] && argv[i][j] <= 'z')
				argv[i][j] -= 32;
	}

	for (i = 1; i < argc; i++)
		printf("%s ", argv[i]);
	printf("\n");

	return 0;
}