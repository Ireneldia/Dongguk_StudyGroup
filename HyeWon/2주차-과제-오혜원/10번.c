//10. �� ������ �Է¹޾� ���� ���ϼ��� (��, ū ������ ���� ���� �� �׻� ����� ������ �Ѵ�)

#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;
	scanf_s("%d%d", &a, &b);

	printf("%d", (a > b) ? (a - b) : (b - a));
	return 0;
}