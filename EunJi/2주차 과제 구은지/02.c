//2. �¹��̴� �������� ����� ���� ���α׷��� ������� �Ѵ�.
//�� 5�����̸� ������ ������ �Է¹޾� ����� ���� ���α׷��� ������

#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;

	printf("5������ ������ �Է��ϼ���.: ");
	scanf_s("%d%d%d%d%d", &a, &b, &c, &d, &e);

	double average = 0.0;
	average = (a + b + c + d + e) / 5.0;   
	printf("�ټ� ������ �����: %.2f", average);

	return 0;
}