#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int x, y;
	printf("x��ǥ�� �Է��ϼ���:");
	scanf("%d", &x);
	printf("y��ǥ�� �Է��ϼ���:");
	scanf("%d", &y);

	if (!(x >= -1000 && x <= 1000 && x != 0 && y >= -1000 && y <= 1000 && y != 0))
		printf("�߸��� �Է��Դϴ�.");

	while (x >= -1000 && x <= 1000 && x != 0 && y >= -1000 && y <= 1000 && y != 0) {
		if (x > 0 && y > 0) printf("1");
		else if (x < 0 && y > 0) printf("2"); 
		else if (x < 0 && y < 0) printf("3"); 
		else printf("4"); break;
	}
	return 0;
}