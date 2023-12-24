#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct font {
	char faceName[40];	//��Ʈ��
	unsigned int size;	//��Ʈ ũ��
	int weight;			//��Ʈ �β�
}FONT;

void initialize(FONT* arr) {
	strcpy(arr[0].faceName, "�ü�");
	arr[0].size = 10;
	arr[0].weight = 2;
	strcpy(arr[1].faceName, "����");
	arr[1].size = 14;
	arr[1].weight = 2;
	strcpy(arr[2].faceName, "����");
	arr[2].size = 13;
	arr[2].weight = 3;
	strcpy(arr[3].faceName, "����");
	arr[3].size = 9;
	arr[3].weight = 4;
	strcpy(arr[4].faceName, "���");
	arr[4].size = 10;
	arr[4].weight = 5;
}

int compare(FONT* first, FONT* second) {
	return strcmp(first->faceName, second->faceName);
}

void num21() {
	FONT* fontArray = (FONT*)calloc(5, sizeof(FONT));
	FONT* fontPoint = NULL;
	char fontName[40] = "";
	char answer;

	initialize(fontArray);
	qsort(fontArray, 5, sizeof(FONT), compare);

	while (1) {
		printf("�˻��� ��Ʈ�� : ");
		scanf("%s", fontName);

		if ((fontPoint = bsearch(fontName, fontArray, 5, sizeof(FONT), compare)) != NULL)
			printf("��Ʈ�� : %s\n��Ʈũ�� : %d\n��Ʈ�β� : %d\n", fontPoint->faceName, fontPoint->size, fontPoint->weight);
		else
			printf("�ش��ϴ� ��Ʈ�� �� ã�ڽ��ϴ�.\n");

		printf("��� �Ͻðڽ��ϱ�? (Y/N) : ");
		scanf(" %c", &answer);
		if (answer == 'N' || answer == 'n')
			break;
	}
}