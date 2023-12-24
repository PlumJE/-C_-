#include <stdio.h>
#include <math.h>

void num19() {
	double a[10];
	double avr = 0, vri = 0, sd;

	puts("실수 값 10개를 입력하세요 : ");
	scanf(" ");
	for (int i = 0; i < 10; i++)
		scanf("%lf", &a[i]);

	for (int i = 0; i < 10; i++)
		avr += a[i];
	avr /= 10;

	for (int i = 0; i < 10; i++) {
		vri += pow(a[i] - avr, 2);
	}
	vri /= 10;

	sd = sqrt(vri);

	printf("평균=%lf, 분산=%lf, 표준편차=%lf\n", avr, vri, sd);
}