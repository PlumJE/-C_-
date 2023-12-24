#include <stdio.h>
#define COUNT 5

struct rect {
	int left;
	int top;
	int right;
	int bottom;
};
typedef struct rect RECT;

int main()
{
	RECT rects[COUNT] = { 0 };
	int i;

	for (i = 0; i < COUNT; i++)
	{
		printf("�»����/���ϴ����� ��ǥ�� �Է��ϼ���(left, top, right, bottom ��)\n");
		scanf("%d %d %d %d", &rects[i].left, &rects[i].top, &rects[i].right, &rects[i].bottom);
	}

	for (i = 0; i < COUNT; i++)
	{
		int width = rects[i].left - rects[i].right;
		int height = rects[i].top - rects[i].bottom;
		width = width > 0 ? width : -width;
		height = height > 0 ? height : -height;

		printf("%d ��° ���簢�� : ", i + 1);
		printf("�»����=(%d,%d) ���ϴ���=(%d,%d) ��=%d ����=%d\n", rects[i].left, rects[i].top, rects[i].right, rects[i].bottom, width, height);
	}
	return 0;
}