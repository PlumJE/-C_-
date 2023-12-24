#include <stdio.h>

void num16() {
	int total_sec;

	printf("시간을 초 단위로 입력하세요 : ");
	scanf("%d", &total_sec);

	int hour = total_sec / 3600;
	int min = (total_sec / 60) % 60;
	int sec = total_sec % 60;

	printf("%d초는 %d시간 %d분 %d초이다.\n", total_sec, hour, min, sec);
}