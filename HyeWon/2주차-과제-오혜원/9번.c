//9. �� ���� x�� y�� �Է� �޾� x�� y�� ���� ���� �ٲٴ� ���α׷��� �ۼ��ϼ���.

#include <stdio.h>
int main(void)
{
	int tmp = 0, x = 0,y = 0;
	scanf_s("%d %d", &x, &y);

	tmp = x;
	x = y;
	y = tmp;

	printf("x: %d y: %d", x, y);
	return 0;
}