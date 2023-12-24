#include <stdio.h>

typedef struct rect {
	int left;
	int top;
	int right;
	int bottom;
} Rect;

void rectCorrect(Rect* rect) {
	if (rect->left > rect->right) {
		int temp = rect->left;
		rect->left = rect->right;
		rect->right = temp;
	}
	if (rect->top > rect->bottom) {
		int temp = rect->top;
		rect->top = rect->bottom;
		rect->bottom = temp;
	}
}

typedef struct point {
	int x;
	int y;
} Point;

int isPointInRect(Rect rect, Point point) {
	return (rect.left <= point.x && point.x <= rect.right) && (rect.top <= point.y && point.y <= rect.bottom) ? 1 : 0;
}

void num21() {
	Rect rect = { 0 };
	Point point = { 0 };

	puts("�»����/���ϴ����� ��ǥ�� �Է��ϼ���(left, top, right, bottom ��)");
	scanf("%d %d %d %d", &rect.left, &rect.top, &rect.right, &rect.bottom);

	printf("�Էµ� ���簢��: �»����=(%d,%d), ���ϴ���=(%d,%d)\n", rect.left, rect.top, rect.right, rect.bottom);
	rectCorrect(&rect);
	printf("������ ���簢��: �»����=(%d,%d), ���ϴ���=(%d,%d)\n", rect.left, rect.top, rect.right, rect.bottom);

	printf("�� ���� ��ǥ�� �Է��ϼ���(x, y) : ");
	scanf("%d %d", &point.x, &point.y);
	printf("(%d, %d)�� ���簢�� ���ο� ", point.x, point.y);
	if (isPointInRect(rect, point))
		puts("�ֽ��ϴ�.");
	else
		puts("���� �ʽ��ϴ�.");
}