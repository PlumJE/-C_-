#include <stdio.h>

void num16() {
	int total_sec;

	printf("�ð��� �� ������ �Է��ϼ��� : ");
	scanf("%d", &total_sec);

	int hour = total_sec / 3600;
	int min = (total_sec / 60) % 60;
	int sec = total_sec % 60;

	printf("%d�ʴ� %d�ð� %d�� %d���̴�.\n", total_sec, hour, min, sec);
}