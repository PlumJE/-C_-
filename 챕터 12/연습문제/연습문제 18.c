#include <stdio.h>
#define MAKE_RGB(R, G, B) (R * 0x10000) + (G * 0x100) + B
#define GET_RED(RGB) RGB / (int)0x10000
#define GET_GREEN(RGB) (RGB % (int)0x10000) / (int)0x100
#define GET_BLUE(RGB) RGB % (int)0x100

void num18() {
	int rgb, red, green, blue;

	printf("RED, GREEN, BLUE값을 스페이스바로 구분해 입력하세요 : ");
	scanf(" %d %d %d", &red, &green, &blue);
	printf("RGB의 값은 %x\n", MAKE_RGB(red, green, blue));

	printf("RGB값을 16진수로 입력하세요 : ");
	scanf(" %x", &rgb);
	printf("RED, GREEN, BLUE의 값은 각각 %d, %d, %d\n", GET_RED(rgb), GET_GREEN(rgb), GET_BLUE(rgb));
}