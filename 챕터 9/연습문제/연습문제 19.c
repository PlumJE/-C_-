#include <stdio.h>

struct contact {
	char name[50];
	char phone[13];
};
typedef struct contact Contact;

void num19() {
	Contact contacts[5];

	for (int i = 0; i < 5; i++) {
		printf("�̸� : ");
		scanf(" %s", contacts[i].name);
		printf("��ȭ��ȣ : ");
		scanf(" %s", contacts[i].phone);
	}

	puts(" --- ��ü ����ó ��� --- ");
	for (int i = 0; i < 5; i++) {
		printf("%s\t%s\n", contacts[i].name, contacts[i].phone);
	}
}