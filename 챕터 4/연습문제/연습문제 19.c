#include <stdio.h>

void num19() {
	double area;

	printf("면적을 제곱미터(cm^2) 단위로 입력하세요 : ");
	scanf("%lf", &area);

	printf("%lf cm^2는 %lf 평과 같다.\n", area, area / 3.3058);
}