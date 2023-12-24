#include <stdio.h>
#include <time.h>

typedef struct tm Time;
typedef struct date {
	int year;
	int month;
	int day;
} Date;

void num24() {
	time_t the_time = time(NULL);
	Time* current_time = localtime(&the_time);

	Date current_date;
	current_date.year = current_time->tm_year + 1900;
	current_date.month = current_time->tm_mon + 1;
	current_date.day = current_time->tm_mday;

	printf("오늘 날짜는 %d년 %d월 %d일 입니다.\n", current_date.year, current_date.month, current_date.day);
}