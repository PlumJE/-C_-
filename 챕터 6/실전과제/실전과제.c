#include <stdio.h>

int GetRGB(int, int, int);	//4바이트 크기의 RGB 색상을 만드는 함수
int GetR(int);				//RGB 색상에서 red를 구하는 함수
int GetG(int);				//RGB 색상에서 green를 구하는 함수 
int GetB(int);				//RGB 색상에서 blue를 구하는 함수

int main(void)
{
	unsigned int r, g, b;
	unsigned int rgb;

	printf("red를 입력하세요(0~255)   : ");
	scanf("%d", &r);

	printf("green을 입력하세요(0~255) : ");
	scanf("%d", &g);

	printf("blue를 입력하세요(0~255)  : ");
	scanf("%d", &b);

	rgb = GetRGB(r, g, b);
	printf("RGB 값 : %06x\n\n", rgb);

	printf("RGB 값을 16진수로 입력하세요 : ");
	scanf("%x", &rgb);

	printf("RGB 값 %06x 중 red   : %3d\n", rgb, GetR(rgb));
	printf("RGB 값 %06x 중 green : %3d\n", rgb, GetG(rgb));
	printf("RGB 값 %06x 중 blue  : %3d\n", rgb, GetB(rgb));

	return 0;
}

int GetRGB(int red, int green, int blue)//4바이트 크기의 RGB 색상을 만드는 함수
{
	return (red | (green << 8) | (blue << 16));
}

int GetR(int rgb)						//RGB 색상에서 red를 구하는 함수
{
	return (rgb & 0x0000ff);
}

int GetG(int rgb)						//RGB 색상에서 green를 구하는 함수 
{
	return (rgb & 0x00ff00) >> 8;
}

int GetB(int rgb)						//RGB 색상에서 blue를 구하는 함수
{
	return (rgb & 0xff0000) >> 16;
}