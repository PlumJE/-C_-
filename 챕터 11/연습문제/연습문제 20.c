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

	printf("저장할 연락처의 개수 : ");
	scanf(" %d", &length);

	Contact* phonebook = (Contact*)calloc(length, sizeof(Contact));

	for (int i = 0; i < length; i++) {
		printf("이    름 : ");
		scanf(" %s", name);
		strcpy(phonebook[i].name, name);

		printf("전화번호 : ");
		scanf(" %s", pnum);
		strcpy(phonebook[i].pnum, pnum);
	}

	do {
		printf("\n0.종료\n1.이름순 출력\n2.전화번호순 출력\n출력방법 선택 : ");
		scanf(" %d", &answer);
		switch (answer) {
		case 0:
			break;
		case 1:
			printf(" --- 전체 연락처 목록 --- \n");
			qsort(phonebook, length, sizeof(Contact), compareByName);
			for (int i = 0; i < length; ++i)
				printf("%s\t%s\n", phonebook[i].name, phonebook[i].pnum);
			break;
		case 2:
			printf(" --- 전체 연락처 목록 --- \n");
			qsort(phonebook, length, sizeof(Contact), compareByPnum);
			for (int i = 0; i < length; ++i)
				printf("%s\t%s\n", phonebook[i].name, phonebook[i].pnum);
			break;
		default:
			printf(" --- 잘못된 입력입니다 --- \n");
			break;
		}
	} while (answer != 0);

	printf("\n");
	free(phonebook);
	phonebook = NULL;
}