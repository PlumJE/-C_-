#include <stdio.h>

int main(void)
{
	char c;
	int i;
	float f;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%c", &c);

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &i);

	printf("�Ǽ��� �Է��ϼ��� : ");
	scanf("%f", &f);

	printf("���� = %c, ���� = %d, �Ǽ� = %f\n", c, i, f);

	return 0;
}