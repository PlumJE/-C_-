#include <stdio.h>

int GetRGB(int, int, int);	//4����Ʈ ũ���� RGB ������ ����� �Լ�
int GetR(int);				//RGB ���󿡼� red�� ���ϴ� �Լ�
int GetG(int);				//RGB ���󿡼� green�� ���ϴ� �Լ� 
int GetB(int);				//RGB ���󿡼� blue�� ���ϴ� �Լ�

int main(void)
{
	unsigned int r, g, b;
	unsigned int rgb;

	printf("red�� �Է��ϼ���(0~255)   : ");
	scanf("%d", &r);

	printf("green�� �Է��ϼ���(0~255) : ");
	scanf("%d", &g);

	printf("blue�� �Է��ϼ���(0~255)  : ");
	scanf("%d", &b);

	rgb = GetRGB(r, g, b);
	printf("RGB �� : %06x\n\n", rgb);

	printf("RGB ���� 16������ �Է��ϼ��� : ");
	scanf("%x", &rgb);

	printf("RGB �� %06x �� red   : %3d\n", rgb, GetR(rgb));
	printf("RGB �� %06x �� green : %3d\n", rgb, GetG(rgb));
	printf("RGB �� %06x �� blue  : %3d\n", rgb, GetB(rgb));

	return 0;
}

int GetRGB(int red, int green, int blue)//4����Ʈ ũ���� RGB ������ ����� �Լ�
{
	return (red | (green << 8) | (blue << 16));
}

int GetR(int rgb)						//RGB ���󿡼� red�� ���ϴ� �Լ�
{
	return (rgb & 0x0000ff);
}

int GetG(int rgb)						//RGB ���󿡼� green�� ���ϴ� �Լ� 
{
	return (rgb & 0x00ff00) >> 8;
}

int GetB(int rgb)						//RGB ���󿡼� blue�� ���ϴ� �Լ�
{
	return (rgb & 0xff0000) >> 16;
}