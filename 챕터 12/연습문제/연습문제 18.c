#include <stdio.h>
#define MAKE_RGB(R, G, B) (R * 0x10000) + (G * 0x100) + B
#define GET_RED(RGB) RGB / (int)0x10000
#define GET_GREEN(RGB) (RGB % (int)0x10000) / (int)0x100
#define GET_BLUE(RGB) RGB % (int)0x100

void num18() {
	int rgb, red, green, blue;

	printf("RED, GREEN, BLUE���� �����̽��ٷ� ������ �Է��ϼ��� : ");
	scanf(" %d %d %d", &red, &green, &blue);
	printf("RGB�� ���� %x\n", MAKE_RGB(red, green, blue));

	printf("RGB���� 16������ �Է��ϼ��� : ");
	scanf(" %x", &rgb);
	printf("RED, GREEN, BLUE�� ���� ���� %d, %d, %d\n", GET_RED(rgb), GET_GREEN(rgb), GET_BLUE(rgb));
}