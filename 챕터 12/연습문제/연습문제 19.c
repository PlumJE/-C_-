#include <stdio.h>

void num19(char* argv[]) {
	int left = atoi(argv[1]);
	int top = atoi(argv[2]);
	int right = atoi(argv[3]);
	int bottom = atoi(argv[4]);
	int width = right - left, height = bottom - top;

	printf("[ �»����=(%d,%d), ���ϴ���=(%d,%d), ��=%d, ����=%d ]\n", left, top, right, bottom, width, height);
	printf("���簢���� ���� : %d\n", width * height);
	printf("���簢���� �ѷ� : %d\n", 2 * (width + height));
}