#include <stdio.h>

void num20() {
	int num;

	printf("16진수로 정수를 입력하세요 : ");
	scanf("%x", &num);

	printf("%x는 10진수로 %d입니다.\n", num, num);
}