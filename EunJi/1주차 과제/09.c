// 9. ���̿� Ű�� �Է��ϴ� ����� ����� Ű�� ���̴� ������ Ű�� �Ҽ��� ���� 1�ڸ������� �� ���忡 ��Ÿ���ÿ�.

#include <stdio.h>

int main(void)
{
	int nAge = 0;
	int hight = 0;

	printf("���̸� �Է��ϼ���.: ");
	scanf_s("%d", &nAge);

	printf("Ű�� �Է��ϼ���.: ");
	scanf_s("%d", &hight);

	double dData = nAge, hight  //Ű�� ���̸� �Է��� ������ �Ҽ��� ���� 1�ڸ� ��Ÿ���� ���α׷����� ��� �־�� ���� �� �𸣰���...

	printf("%d, %s\n", nAge, hight);

	return 0;

}