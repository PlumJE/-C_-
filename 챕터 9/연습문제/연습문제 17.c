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

void PrintLine(Line line) {
	printf("시작점=(%d, %d), 끝점=(%d, %d)\n", line.start.x, line.start.y, line.end.x, line.end.y);
}

void num17() {
	Line line = { {10, 20}, {50, 60} };
	int dx, dy;

	printf("변경 전 직선 정보 : ");
	PrintLine(line);

	printf("x축으로 이동할 거리를 입력하세요 : ");
	scanf("%d", &dx);
	printf("y축으로 이동할 거리를 입력하세요 : ");
	scanf("%d", &dy);

	line.start.x += dx; line.start.y += dy;
	line.end.x += dx; line.end.y += dy;

	printf("변경 후 직선 정보 : ");
	PrintLine(line);
}