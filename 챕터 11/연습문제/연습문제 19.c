#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct contact {
	char name[20];
	char pnum[15];
}Contact;

void num19() {
	int length = 0;
	char name[20] = "";
	char pnum[15] = "";

	printf("저장할 연락처의 개수 : ");
	scanf("%d", &length);

	Contact* phonebook = (Contact*)calloc(length, sizeof(Contact));

	for (int i = 0; i < length; i++) {
		printf("이    름 : ");
		scanf("%s", name);
		strcpy(phonebook[i].name, name);

		printf("전화번호 : ");
		scanf("%s", pnum);
		strcpy(phonebook[i].pnum, pnum);
	}

	printf(" --- 전체 연락처 목록 --- \n");
	for (int i = 0; i < length; i++)
		printf("%s\t%s\n", phonebook[i].name, phonebook[i].pnum);

	printf("\n");
	free(phonebook);
	phonebook = NULL;
}