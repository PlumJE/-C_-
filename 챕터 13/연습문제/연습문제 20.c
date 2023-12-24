#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct login_info {
	char id[20];
	char password[20];
} LOGIN_INFO;

void num20() {
	FILE* file = fopen("login_file.bin", "rb");
	if (file == NULL)
		printf("login_file 열기 에러!\n");

	int users;
	fscanf(file, "%d", &users);
	printf("패스워드 파일을 읽었습니다. %d명의 사용자 정보가 있습니다.\n", users);

	LOGIN_INFO* login_infos = calloc(users, sizeof(LOGIN_INFO));
	for (int i = 0; i < users; ++i) {
		fscanf(file, "%s %s\n", login_infos[i].id, login_infos[i].password);
	}

	char id[20];
	char password[20];
	char choose;
	int isLogin;
	while (1) {
		printf("ID를 입력하세요 : ");
		scanf(" %s", id);
		printf("패스워드를 입력하세요 : ");
		scanf(" %s", password);

		isLogin = 0;
		for (int i = 0; i < users; ++i) {
			if (strcmp(id, login_infos[i].id) == 0 && strcmp(password, login_infos[i].password) == 0) {
				isLogin = 1;
				break;
			}
		}

		printf("LOGIN ");
		if (isLogin == 1)
			printf("OK!\n");
		else
			printf("FAILED!\n");

		printf("계속하시겠습니까?(Y/N) : ");
	wrong_input:
		scanf(" %c", &choose);
		switch (choose) {
		case 'Y': case 'y':
			continue;
		case 'N': case 'n':
			return;
		default:
			printf("잘못된 입력입니다. Y/N을 입력하세요 : ");
			goto wrong_input;
		}
	}
}