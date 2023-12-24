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

	puts("좌상단점/우하단점의 좌표를 입력하세요(left, top, right, bottom 순)");
	scanf("%d %d %d %d", &rect.left, &rect.top, &rect.right, &rect.bottom);

	printf("입력된 직사각형: 좌상단점=(%d,%d), 우하단점=(%d,%d)\n", rect.left, rect.top, rect.right, rect.bottom);
	rectCorrect(&rect);
	printf("수정된 직사각형: 좌상단점=(%d,%d), 우하단점=(%d,%d)\n", rect.left, rect.top, rect.right, rect.bottom);

	printf("한 점의 좌표를 입력하세요(x, y) : ");
	scanf("%d %d", &point.x, &point.y);
	printf("(%d, %d)는 직사각형 내부에 ", point.x, point.y);
	if (isPointInRect(rect, point))
		puts("있습니다.");
	else
		puts("있지 않습니다.");
}