#include <stdio.h>

typedef struct point {
	int x, y;
} Point;

typedef struct rect {
	Point lt, rb;
} Rect;

Point CenterOfRect(Rect* rect) {
	Point center = { 0, 0 };
	center.x = (rect->lt.x + rect->rb.x) / 2;
	center.y = (rect->lt.y + rect->rb.y) / 2;

	return center;
}

void InputRect(Rect* rect) {
	printf("�»����/���ϴ����� ��ǥ�� �Է��ϼ���(left, top, right, bottom ��)\n");
	scanf("%d %d %d %d", &rect->lt.x, &rect->lt.y, &rect->rb.x, &rect->rb.y);
}

void num23() {
	Rect square;
	Point center;

	InputRect(&square);
	center = CenterOfRect(&square);

	printf("�Էµ� ���簢�� : �»����=(%d,%d), ���ϴ���=(%d,%d)\n", square.lt.x, square.lt.y, square.rb.x, square.rb.y);
	printf("���簢���� �߽� : (%d, %d)", center.x, center.y);
	puts("\n");
}