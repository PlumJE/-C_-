#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct contact {
	char name[20];
	char pnum[15];
}Contact;

void num18() {
	Contact* phonebook = (Contact*)calloc(100, sizeof(Contact));
	char name[20] = "";
	char pnum[15] = "";
	char answer;
	int newindex = 0;
	int findindex = 0;

	while (1) {
		printf("검색할 이름 : ");
		scanf("%s", name);

		if (name[0] == '.')
			break;

		for (int i = 0; i < 100; i++) {
			if (strcmp(phonebook[i].name, name) == 0) {
				findindex = i;
				break;
			}
			findindex = -1;
		}

		if (findindex == -1) {
			printf("저장되지 않은 연락처입니다. 저장하시겠습니까? (Y/N) : ");
			scanf(" %c", &answer);
			if (answer == 'y') {
				if (newindex >= 100) {
					printf("전화번호부가 꽉 찼습니다.\n");
					continue;
				}

				printf("전화번호 입력 : ");
				scanf("%s", pnum);
				strcpy(phonebook[newindex].name, name);
				strcpy(phonebook[newindex].pnum, pnum);

				newindex++;
			}
		}
		else {
			printf("찾은 전화번호 : %s\n", phonebook[findindex].pnum);
		}

		printf("\n");
	}

	printf("\n");
	free(phonebook);
	phonebook = NULL;
}