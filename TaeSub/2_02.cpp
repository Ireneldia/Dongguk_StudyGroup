//2. �¹��̴� �������� ����� ���� ���α׷��� ������� �Ѵ�.
//�� 5�����̸� ������ ������ �Է¹޾� ����� ���� ���α׷��� ������
#include<stdio.h>

int main(void)
{
	int num1, num2, num3, num4, num5;
	float tot;

	
	printf("����1�� ����: ");
	scanf_s("%d", &num1);

	printf("����2�� ����: ");
	scanf_s("%d", &num2);

	printf("����3�� ����: ");
	scanf_s("%d", &num3);

	printf("����4�� ����: ");
	scanf_s("%d", &num4);

	printf("����5�� ����: ");
	scanf_s("%d", &num5);

	tot = (num1 + num2 + num3 + num4 + num5)/5;

	printf("������ ���� ��� : %.1f", tot);
	return 0;

}