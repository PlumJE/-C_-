#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct contact {
	char name[20];
	char pnum[15];
}Contact;

int compareByName(Contact* a, Contact* b) {
	return strcmp(a->name, b->name);
}

int compareByPnum(Contact* a, Contact* b) {
	return strcmp(a->pnum, b->pnum);
}

void num20() {
	int length;
	int answer;
	int earlier;
	char name[20] = "";
	char pnum[15] = "";

	printf("������ ����ó�� ���� : ");
	scanf(" %d", &length);

	Contact* phonebook = (Contact*)calloc(length, sizeof(Contact));

	for (int i = 0; i < length; i++) {
		printf("��    �� : ");
		scanf(" %s", name);
		strcpy(phonebook[i].name, name);

		printf("��ȭ��ȣ : ");
		scanf(" %s", pnum);
		strcpy(phonebook[i].pnum, pnum);
	}

	do {
		printf("\n0.����\n1.�̸��� ���\n2.��ȭ��ȣ�� ���\n��¹�� ���� : ");
		scanf(" %d", &answer);
		switch (answer) {
		case 0:
			break;
		case 1:
			printf(" --- ��ü ����ó ��� --- \n");
			qsort(phonebook, length, sizeof(Contact), compareByName);
			for (int i = 0; i < length; ++i)
				printf("%s\t%s\n", phonebook[i].name, phonebook[i].pnum);
			break;
		case 2:
			printf(" --- ��ü ����ó ��� --- \n");
			qsort(phonebook, length, sizeof(Contact), compareByPnum);
			for (int i = 0; i < length; ++i)
				printf("%s\t%s\n", phonebook[i].name, phonebook[i].pnum);
			break;
		default:
			printf(" --- �߸��� �Է��Դϴ� --- \n");
			break;
		}
	} while (answer != 0);

	printf("\n");
	free(phonebook);
	phonebook = NULL;
}