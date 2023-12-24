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
	printf("좌상단점/우하단점의 좌표를 입력하세요(left, top, right, bottom 순)\n");
	scanf("%d %d %d %d", &rect->lt.x, &rect->lt.y, &rect->rb.x, &rect->rb.y);
}

void num23() {
	Rect square;
	Point center;

	InputRect(&square);
	center = CenterOfRect(&square);

	printf("입력된 직사각형 : 좌상단점=(%d,%d), 우하단점=(%d,%d)\n", square.lt.x, square.lt.y, square.rb.x, square.rb.y);
	printf("직사각형의 중심 : (%d, %d)", center.x, center.y);
	puts("\n");
}