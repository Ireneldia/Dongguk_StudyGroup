//9. �� ���� x�� y�� �Է� �޾� x�� y�� ���� ���� �ٲٴ� ���α׷��� �ۼ��ϼ���.
#include <stdio.h>

int main(void)
{
	int x, y;
	int tot;

	printf("x: ");
	scanf_s("%d", &x);
	printf("y: ");
	scanf_s("%d", &y);

	
	printf("x: %d, y:%d", x, y);
	tot = x;
	y = x;
	printf("x: %d, y: %d", tot, y);
	

	return 0;
}