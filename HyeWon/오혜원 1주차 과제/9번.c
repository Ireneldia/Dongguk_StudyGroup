/*
9. ���̿� Ű�� �Է��ϴ� ����� ����� Ű�� ���̴� ������ Ű�� �Ҽ��� ���� 1�ڸ�������
�� ���忡 ��Ÿ���ÿ�.
*/

#include <stdio.h>
int main(void)
{
	int age;
	double height;

	printf("���̸� �Է��ϼ��� :");
	scanf_s("%d", &age);

	printf("Ű�� �Է��ϼ��� :");
	scanf_s("%.1f", &height);

	printf("���̴� : %d\n Ű�� : %lf", age, height);

	return 0;
}