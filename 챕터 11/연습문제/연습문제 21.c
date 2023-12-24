#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct font {
	char faceName[40];	//폰트명
	unsigned int size;	//폰트 크기
	int weight;			//폰트 두께
}FONT;

void initialize(FONT* arr) {
	strcpy(arr[0].faceName, "궁서");
	arr[0].size = 10;
	arr[0].weight = 2;
	strcpy(arr[1].faceName, "바탕");
	arr[1].size = 14;
	arr[1].weight = 2;
	strcpy(arr[2].faceName, "굴림");
	arr[2].size = 13;
	arr[2].weight = 3;
	strcpy(arr[3].faceName, "돋움");
	arr[3].size = 9;
	arr[3].weight = 4;
	strcpy(arr[4].faceName, "고딕");
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
		printf("검색할 폰트명 : ");
		scanf("%s", fontName);

		if ((fontPoint = bsearch(fontName, fontArray, 5, sizeof(FONT), compare)) != NULL)
			printf("폰트명 : %s\n폰트크기 : %d\n폰트두께 : %d\n", fontPoint->faceName, fontPoint->size, fontPoint->weight);
		else
			printf("해당하는 폰트를 못 찾겠습니다.\n");

		printf("계속 하시겠습니까? (Y/N) : ");
		scanf(" %c", &answer);
		if (answer == 'N' || answer == 'n')
			break;
	}
}