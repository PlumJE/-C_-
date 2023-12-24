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

	printf("������ ����ó�� ���� : ");
	scanf("%d", &length);

	Contact* phonebook = (Contact*)calloc(length, sizeof(Contact));

	for (int i = 0; i < length; i++) {
		printf("��    �� : ");
		scanf("%s", name);
		strcpy(phonebook[i].name, name);

		printf("��ȭ��ȣ : ");
		scanf("%s", pnum);
		strcpy(phonebook[i].pnum, pnum);
	}

	printf(" --- ��ü ����ó ��� --- \n");
	for (int i = 0; i < length; i++)
		printf("%s\t%s\n", phonebook[i].name, phonebook[i].pnum);

	printf("\n");
	free(phonebook);
	phonebook = NULL;
}