//9. �� ���� x�� y�� �Է� �޾� x�� y�� ���� ���� �ٲٴ� ���α׷��� �ۼ��ϼ���.

#include <stdio.h>

int main(void)
{
	printf("�� ���� x�� y�� ������� �Է��ϼ���.: ");

	int x = 0, y = 0, tmp = 0;
	scanf_s("%d%d", &x, &y);

	tmp = x; 
	x = y;
	y = tmp;

	printf("x:%d, y:%d\n", x, y);

	return 0;
}