#include <stdio.h>

int GetRectWidth(int x1, int x2) {
	int width = x1 - x2;
	width = width < 0 ? -width : width;
	return width;
}

int GetRectHeight(int y1, int y2) {
	int height = y1 - y2;
	height = height < 0 ? -height : height;
	return height;
}

int GetRectArea(int x1, int y1, int x2, int y2) {
	return GetRectWidth(x1, x2) * GetRectHeight(y1, y2);
}

int GetRectPerimeter(int x1, int y1, int x2, int y2) {
	return 2 * (GetRectWidth(x1, x2) + GetRectHeight(y1, y2));
}

void num20() {
	int x1, y1, x2, y2;

	printf("직사각형의 왼쪽 위 좌표를 입력하세요 : ");
	scanf("%d %d", &x1, &y1);

	printf("직사각형의 오른쪽 아래 좌표를 입력하세요 : ");
	scanf("%d %d", &x2, &y2);

	printf("직사각형의 폭은 %d, 높이는 %d, 넓이는 %d, 둘레는 %d 입니다.\n",
		GetRectWidth(x1, x2), GetRectHeight(y1, y2), GetRectArea(x1, y1, x2, y2), GetRectPerimeter(x1, y1, x2, y2));
}