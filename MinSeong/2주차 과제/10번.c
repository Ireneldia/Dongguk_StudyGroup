/*
10. �� ������ �Է¹޾� ���� ���ϼ��� (��, ū ������ ���� ���� �� �׻� ����� ������ �Ѵ�)
*/
#include <stdio.h>

int main(void) {
	int a, b;
	printf("�� ���� �Է��ϼ���:");
	scanf_s("%d %d", &a, &b);

	printf("%d", a >= b ? a - b : b - a);

	return 0;
}