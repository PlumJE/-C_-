#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct login_info {
	char id[20];
	char password[20];
} LOGIN_INFO;

void num19() {
	int users;
	printf("전체 사용자 수를 입력하세요 : ");
	scanf(" %d", &users);

	LOGIN_INFO* login_infos = calloc(users, sizeof(LOGIN_INFO));
	FILE* file = fopen("login_file.bin", "wb");

	fprintf(file, "%d\n", users);
	for (int i = 0; i < users; ++i) {
		printf("%d번 유저의 아이디 : ", i + 1);
		scanf(" %s", login_infos[i].id);
		printf("%d번 유저의 비밀번호 : ", i + 1);
		scanf(" %s", login_infos[i].password);
		fprintf(file, "%s %s\n", login_infos[i].id, login_infos[i].password);
	}
	fclose(file);
}