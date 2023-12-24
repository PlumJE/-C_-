#include <stdio.h>

int main(void)
{
	char c;
	int i;
	float f;

	printf("문자를 입력하세요 : ");
	scanf("%c", &c);

	printf("정수를 입력하세요 : ");
	scanf("%d", &i);

	printf("실수를 입력하세요 : ");
	scanf("%f", &f);

	printf("문자 = %c, 정수 = %d, 실수 = %f\n", c, i, f);

	return 0;
}