#include <stdio.h>

void num19(char* argv[]) {
	int left = atoi(argv[1]);
	int top = atoi(argv[2]);
	int right = atoi(argv[3]);
	int bottom = atoi(argv[4]);
	int width = right - left, height = bottom - top;

	printf("[ 좌상단점=(%d,%d), 우하단점=(%d,%d), 폭=%d, 높이=%d ]\n", left, top, right, bottom, width, height);
	printf("직사각형의 면적 : %d\n", width * height);
	printf("직사각형의 둘레 : %d\n", 2 * (width + height));
}