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
		printf("login_file ���� ����!\n");

	int users;
	fscanf(file, "%d", &users);
	printf("�н����� ������ �о����ϴ�. %d���� ����� ������ �ֽ��ϴ�.\n", users);

	LOGIN_INFO* login_infos = calloc(users, sizeof(LOGIN_INFO));
	for (int i = 0; i < users; ++i) {
		fscanf(file, "%s %s\n", login_infos[i].id, login_infos[i].password);
	}

	char id[20];
	char password[20];
	char choose;
	int isLogin;
	while (1) {
		printf("ID�� �Է��ϼ��� : ");
		scanf(" %s", id);
		printf("�н����带 �Է��ϼ��� : ");
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

		printf("����Ͻðڽ��ϱ�?(Y/N) : ");
	wrong_input:
		scanf(" %c", &choose);
		switch (choose) {
		case 'Y': case 'y':
			continue;
		case 'N': case 'n':
			return;
		default:
			printf("�߸��� �Է��Դϴ�. Y/N�� �Է��ϼ��� : ");
			goto wrong_input;
		}
	}
}