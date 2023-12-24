#include <stdio.h>
#include <string.h>

typedef struct contact {
	char name[32];
	char phone[32];
} CONTACT;

void num14() {
	char name[32], phone[32];
	CONTACT c[5];
	int choose = -1;
	FILE* fp = NULL;

	while (1) {
		printf("1. 이름과 전화번호 입력\n2. 텍스트 파일로 저장\n3. 바이너리 파일로 저장\n4. 텍스트 파일 읽기\n5. 바이너리 파일 읽기\n0. 종료\n선택 : ");
		scanf("%d", &choose);

		if (choose == 0)
			return;

		switch (choose) {
		case 1:
			for (int i = 0; i < 5; ++i) {
				printf("이  름 : ");
				scanf("%s", c[i].name);
				printf("전화번호 : ");
				scanf("%s", c[i].phone);
			}
			break;
		case 2:
			fp = fopen("연락처.txt", "w");
			for (int i = 0; i < 5; ++i)
				fprintf(fp, "%s %s\n", c[i].name, c[i].phone);
			printf("텍스트 파일로 저장했습니다.\n");
			break;
		case 3:
			fp = fopen("연락처.bin", "wb");
			for (int i = 0; i < 5; ++i)
				fwrite(&c[i], sizeof(CONTACT), 1, fp);
			printf("바이너리 파일로 저장했습니다.\n");
			break;
		case 4:
			fp = fopen("연락처.txt", "r");
			for (int i = 0; i < 5; ++i) {
				fscanf(fp, "%s %s", c[i].name, c[i].phone);
				printf("이    름 : %s\n전화번호 : %s\n", c[i].name, c[i].phone);
			}
			break;
		case 5:
			fp = fopen("연락처.bin", "rb");
			for (int i = 0; i < 5; ++i) {
				fread(&c[i], sizeof(CONTACT), 1, fp);
				printf("이    름 : %s\n전화번호 : %s\n", c[i].name, c[i].phone);
			}
			break;
		case 0:
			fclose(fp);
			return;
		default:
			printf("잘못된 입력입니다.\n");
		}
		puts("");
	}
}