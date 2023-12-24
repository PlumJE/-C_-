#include <stdio.h>

struct contact {
	char name[50];
	char phone[13];
};
typedef struct contact Contact;

void num19() {
	Contact contacts[5];

	for (int i = 0; i < 5; i++) {
		printf("이름 : ");
		scanf(" %s", contacts[i].name);
		printf("전화번호 : ");
		scanf(" %s", contacts[i].phone);
	}

	puts(" --- 전체 연락처 목록 --- ");
	for (int i = 0; i < 5; i++) {
		printf("%s\t%s\n", contacts[i].name, contacts[i].phone);
	}
}