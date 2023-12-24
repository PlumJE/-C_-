#include <stdio.h>

struct item_info {
	char title[128];
	char type[16];
};

void num15() {
	struct item_info item1 = { "개념을 콕콕 잡아주는 C 프로그래밍", "도서, 교재" };

	printf("Item Information\n");
	printf("	title : %s\n", item1.title);
	printf("	type  : %s\n", item1.type);
}