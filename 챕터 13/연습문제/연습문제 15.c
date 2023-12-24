#include <stdio.h>
#include <string.h>

void num15(char* filename) {
	printf("%s의 내용:\n", filename);

	FILE* fp = fopen(filename, "r");
	if (!fp) printf("파일 열기 실패 : %s\n", filename);

	wchar_t c;
	while ((c = fgetwc(fp)) != WEOF)
		wprintf(L"%c", c);
	puts("");

	fclose(fp);
}