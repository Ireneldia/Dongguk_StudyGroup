/*
9. �� ���� x�� y�� �Է� �޾� x�� y�� ���� ���� �ٲٴ� ���α׷��� �ۼ��ϼ���.
*/
#include <stdio.h>

int main(void){
	int x, y;
	int tmp;

	printf("�� ���� �Է��ϼ���:");
	scanf_s("%d %d", &x, &y);
	printf("x = %d y =%d\n", x, y);
	
	tmp = x;
	x = y;
	y = tmp;

	printf("x = %d y =%d", x, y);

	return 0;
}