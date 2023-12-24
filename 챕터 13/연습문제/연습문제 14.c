#include <stdio.h>
#include <string.h>

typedef struct contact {
	char name[32];
	char phone[32];
} CONTACT;

void num14() {
	char name[32], phone[32];
	CONTACT c[5];
	int choose = -1;
	FILE* fp = NULL;

	while (1) {
		printf("1. �̸��� ��ȭ��ȣ �Է�\n2. �ؽ�Ʈ ���Ϸ� ����\n3. ���̳ʸ� ���Ϸ� ����\n4. �ؽ�Ʈ ���� �б�\n5. ���̳ʸ� ���� �б�\n0. ����\n���� : ");
		scanf("%d", &choose);

		if (choose == 0)
			return;

		switch (choose) {
		case 1:
			for (int i = 0; i < 5; ++i) {
				printf("��  �� : ");
				scanf("%s", c[i].name);
				printf("��ȭ��ȣ : ");
				scanf("%s", c[i].phone);
			}
			break;
		case 2:
			fp = fopen("����ó.txt", "w");
			for (int i = 0; i < 5; ++i)
				fprintf(fp, "%s %s\n", c[i].name, c[i].phone);
			printf("�ؽ�Ʈ ���Ϸ� �����߽��ϴ�.\n");
			break;
		case 3:
			fp = fopen("����ó.bin", "wb");
			for (int i = 0; i < 5; ++i)
				fwrite(&c[i], sizeof(CONTACT), 1, fp);
			printf("���̳ʸ� ���Ϸ� �����߽��ϴ�.\n");
			break;
		case 4:
			fp = fopen("����ó.txt", "r");
			for (int i = 0; i < 5; ++i) {
				fscanf(fp, "%s %s", c[i].name, c[i].phone);
				printf("��    �� : %s\n��ȭ��ȣ : %s\n", c[i].name, c[i].phone);
			}
			break;
		case 5:
			fp = fopen("����ó.bin", "rb");
			for (int i = 0; i < 5; ++i) {
				fread(&c[i], sizeof(CONTACT), 1, fp);
				printf("��    �� : %s\n��ȭ��ȣ : %s\n", c[i].name, c[i].phone);
			}
			break;
		case 0:
			fclose(fp);
			return;
		default:
			printf("�߸��� �Է��Դϴ�.\n");
		}
		puts("");
	}
}