#include <stdio.h>
#include <string.h>

int RemoveSpace(char str[]) {
	char temp[50] = "";
	int killcount = 0;

	int i = 0;
	for (int j = 0; str[j] != '\0'; j++) {
		if (str[j] == ' ' || str[j] == '\t' || str[j] == '\v' || str[j] == '\n' || str[j] == '\f' || str[j] == '\r') {
			killcount += 1;
		}
		else {
			temp[i] = str[j];
			i++;
		}
	}

	strcpy(str, temp);
	return killcount;
}

void num21() {
	char text[50];
	int eliminate;

	printf("���ڿ��� �Է��ϼ��� : ");
	gets(text);

	eliminate = RemoveSpace(text);
	printf("��� ���ڿ� : %s\n���ŵ� ���� ���� ���� : %d", text, eliminate);
	puts("\n");
}