#include <stdio.h>

void num21() {
	unsigned int red = 0, green = 0, blue = 0;
	int RGB = 0;

	printf("red, green, blue�� ���� �Է��ϼ��� : ");
	scanf("%d %d %d", &red, &green, &blue);

	RGB = red | (green << 8) | (blue << 16);
	printf("RGB�� ���� 0x%08x\n", RGB);
}