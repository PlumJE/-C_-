#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void num16(char* filename1, char* filename2) {
	FILE* file1, * file2;
	if ((file1 = fopen(filename1, "rb")) == NULL)
		printf("���� %s ���� ����!", filename1);
	if ((file2 = fopen(filename2, "rb")) == NULL)
		printf("���� %s ���� ����!", filename2);

	unsigned long filesize1, filesize2;
	fseek(file1, 0, SEEK_END);
	filesize1 = ftell(file1);
	fseek(file1, 0, SEEK_SET);

	fseek(file2, 0, SEEK_END);
	filesize2 = ftell(file2);
	fseek(file2, 0, SEEK_SET);

	printf("���� %s�� ���� %s��(��) ���� ", filename1, filename2);
	if (filesize1 != filesize2) {
		printf("�ٸ��ϴ�.\n");
		fclose(file1);
		fclose(file2);
		return;
	}

	char* buffer1, * buffer2;
	buffer1 = calloc(filesize1, 1);
	buffer2 = calloc(filesize2, 1);

	fread(buffer1, 1, filesize1, file1);
	fread(buffer2, 1, filesize2, file2);
	for (int i = 0; i < max(filesize1, filesize2); ++i) {
		if (buffer1[i] != buffer2[i]) {
			printf("�ٸ��ϴ�.\n");
			fclose(file1);
			fclose(file2);
			return;
		}
	}

	printf("�����ϴ�.\n");
	fclose(file1);
	fclose(file2);
	return;
}