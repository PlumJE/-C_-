#include <stdio.h>

int main(void) {
	int hour, min, sec;
	int total_sec = 0;

	printf("�ð��� ������� �Է��ϼ���(��, ��, ��) : ");
	scanf("%d %d %d", &hour, &min, &sec);

	total_sec = 3600 * hour + 60 * min + sec;

	printf("%d�ð� %d�� %d�ʴ� �� %d���Դϴ�.\n", hour, min, sec, total_sec);

	return 0;
}