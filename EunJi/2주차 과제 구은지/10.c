//10. �� ������ �Է¹޾� ���� ���ϼ���(��, ū ������ ���� ���� �� �׻� ����� ������ �Ѵ�)

#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, num = 0;

	printf("�� ������ �Է��ϼ���.: ");

	scanf_s("%d%d", &a, &b);
	num = (a > b) ? a - b : b - a;
	printf("�� ������ ����:%d", num);

	return 0;
}