#include <stdio.h>
#include <math.h>

struct point {
	int x, y;
};
typedef struct point POINT;

struct line {
	POINT start, end;
};
typedef struct line Line;

void num16() {
	Line line = { {0, 0}, {0, 0} };
	int width, height;

	printf("직선의 시작점 좌표를 입력하세요 : ");
	scanf("%d %d", &line.start.x, &line.start.y);
	printf("직선의 끝점 좌표를 입력하세요 : ");
	scanf("%d %d", &line.end.x, &line.end.y);

	width = line.start.x - line.end.x;
	width = width >= 0 ? width : -width;
	height = line.start.y - line.end.y;
	height = height >= 0 ? height : -height;

	printf("직선의 길이는 %lf입니다.\n", sqrt(pow(width, 2) + pow(height, 2)));
}