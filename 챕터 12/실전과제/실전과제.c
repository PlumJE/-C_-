#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i, j;

	for (i = 1; i < argc; i++)
	{
		//소문자를 대문자로 전환
		for (j = 0; j <= sizeof(argv[i]) / sizeof(char); j++)
			if ('a' <= argv[i][j] && argv[i][j] <= 'z')
				argv[i][j] -= 32;
	}

	for (i = 1; i < argc; i++)
		printf("%s ", argv[i]);
	printf("\n");

	return 0;
}