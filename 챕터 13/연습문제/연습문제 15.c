#include <stdio.h>
#include <string.h>

void num15(char* filename) {
	printf("%s�� ����:\n", filename);

	FILE* fp = fopen(filename, "r");
	if (!fp) printf("���� ���� ���� : %s\n", filename);

	wchar_t c;
	while ((c = fgetwc(fp)) != WEOF)
		wprintf(L"%c", c);
	puts("");

	fclose(fp);
}