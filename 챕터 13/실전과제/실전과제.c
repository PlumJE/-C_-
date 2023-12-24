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

	fp1 = fopen(argv[1], "r"); // 입력용 파일 열기
	if (fp1 == NULL)
	{
		printf("%s 파일 열기 실패\n", argv[1]);
		return -1;
	}

	fp2 = fopen(argv[2], "w"); // 출력용 파일 열기
	if (fp2 == NULL)
	{
		printf("%s 파일 열기 실패\n", argv[2]);
		return -1;
	}

	while (!feof(fp1)) // fp1이 가리키는 파일의 끝이 아닌 동안
	{
		fgets(buff, 256, fp1); // 입력용 파일에서 한 줄의 문자열 읽기

		for (i = 0; buff[i] != '\0'; i++)
		{
			if (isupper(buff[i]))
				buff[i] = tolower(buff[i]); // 대문자는 소문자로 변환
			else if (islower(buff[i]))
				buff[i] = toupper(buff[i]); // 소문자는 대문자로 변환
		}

		fputs(buff, fp2); // 출력용 파일에 한 줄의 문자열 쓰기
	}

	printf("파일 변환 완료\n");

	fclose(fp1); // 입력용 파일 닫기
	fclose(fp2); // 출력용 파일 닫기

	return 0;
}