#include <stdio.h>

union color {
	unsigned char rgb[4];
	unsigned int dword;
};

void num18() {
	union color color1 = { 0 };

	for (int i = 0; i < 3; i++) {
		switch (i) {
		case 0: printf("red�� "); break;
		case 1: printf("green�� "); break;
		case 2: printf("blue�� "); break;
		}
		printf("�Է��ϼ���(0~255) : ");
		scanf("%hhd", &color1.rgb[i]);
	}

	printf("color1.dword = %6X\n", color1.dword);
}