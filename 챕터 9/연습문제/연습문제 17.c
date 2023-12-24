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
	printf("������=(%d, %d), ����=(%d, %d)\n", line.start.x, line.start.y, line.end.x, line.end.y);
}

void num17() {
	Line line = { {10, 20}, {50, 60} };
	int dx, dy;

	printf("���� �� ���� ���� : ");
	PrintLine(line);

	printf("x������ �̵��� �Ÿ��� �Է��ϼ��� : ");
	scanf("%d", &dx);
	printf("y������ �̵��� �Ÿ��� �Է��ϼ��� : ");
	scanf("%d", &dy);

	line.start.x += dx; line.start.y += dy;
	line.end.x += dx; line.end.y += dy;

	printf("���� �� ���� ���� : ");
	PrintLine(line);
}