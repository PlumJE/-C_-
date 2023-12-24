#include <stdio.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
	FILE* fp1, * fp2;
	char buff[256];
	int i;

	if (argc < 3)
	{
		printf("Usage : Convert src_file dest_file\n");
		return -1;
	}

	fp1 = fopen(argv[1], "r"); // �Է¿� ���� ����
	if (fp1 == NULL)
	{
		printf("%s ���� ���� ����\n", argv[1]);
		return -1;
	}

	fp2 = fopen(argv[2], "w"); // ��¿� ���� ����
	if (fp2 == NULL)
	{
		printf("%s ���� ���� ����\n", argv[2]);
		return -1;
	}

	while (!feof(fp1)) // fp1�� ����Ű�� ������ ���� �ƴ� ����
	{
		fgets(buff, 256, fp1); // �Է¿� ���Ͽ��� �� ���� ���ڿ� �б�

		for (i = 0; buff[i] != '\0'; i++)
		{
			if (isupper(buff[i]))
				buff[i] = tolower(buff[i]); // �빮�ڴ� �ҹ��ڷ� ��ȯ
			else if (islower(buff[i]))
				buff[i] = toupper(buff[i]); // �ҹ��ڴ� �빮�ڷ� ��ȯ
		}

		fputs(buff, fp2); // ��¿� ���Ͽ� �� ���� ���ڿ� ����
	}

	printf("���� ��ȯ �Ϸ�\n");

	fclose(fp1); // �Է¿� ���� �ݱ�
	fclose(fp2); // ��¿� ���� �ݱ�

	return 0;
}