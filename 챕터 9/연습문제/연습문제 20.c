#include <stdio.h>
#include <string.h>

struct contact {
	char name[50];
	char phone[13];
};
typedef struct contact Contact;

int findname(Contact contacts[], char name[]) {
	for (int i = 0; i < 100; i++) {
		if (strcmp(name, contacts[i].name) == 0) {
			return 1;
		}
	}
	return 0;
}

char* findphone(Contact contacts[], char name[]) {
	for (int i = 0; i < 100; i++) {
		if (strcmp(name, contacts[i].name) == 0) {
			return contacts[i].phone;
		}
	}
	return "";
}

void append(Contact* contacts, char name[], char phone[]) {
	for (int i = 0; i < 100; i++) {
		if (strcmp(contacts[i].name, "") == 0) {
			strcpy(contacts[i].name, name);
			strcpy(contacts[i].phone, phone);
			break;
		}
	}
}

void num20() {
	Contact contacts[100] = { 0 };
	char name[50] = "";
	char phone[13] = "";
	char choose = '\0';

	while (1) {
		printf("�˻��� �̸�(������) : ");
		scanf(" %s", name);

		if (strcmp(name, ".") == 0)
			break;

		if (findname(contacts, name))
			printf("ã�� ��ȭ��ȣ : %s\n", findphone(contacts, name));
		else {
			printf("������� ���� ����ó�Դϴ�. �����Ͻðڽ��ϱ�? (Y/N) : ");
			scanf(" %c", &choose);
			if (choose == 'Y' || choose == 'y') {
				printf("��ȭ��ȣ �Է� : ");
				scanf(" %s", phone);
				append(contacts, name, phone);
			}
		}

		puts("");
	}
}