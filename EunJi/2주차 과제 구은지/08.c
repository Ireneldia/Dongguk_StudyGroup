//8. ���� ��/�� �����ڸ� �̿��Ͽ� x=5�� y=10�� x=8, y=6���� ��������.

#include <stdio.h>

int main(void)
{
	int x = 5, y = 10;

	++x;
	++x;
	++x;

	--y;
	--y;
	--y;
	--y;

	printf("x:%d\ny:%d", x, y);

	return 0;
}