#include <stdio.h>
//3. �ڽ��� �й�, �̸�, ������ ����ϴ� ���α׷��� �ۼ��ϼ���.
// �й��� ����, �̸��� ���ڿ�, ������ ���� ����� ����մϴ�.
int main(void)
{
	int student_no;
	char name[10];
	char grade;

	printf("�й��� �Է��ϼ��� : ");
	scanf_s("%d%*d", &student_no);
		

	printf("�̸��� �Է��ϼ��� : ");
	gets_s(name, sizeof(name));

	printf("������ �Է��ϼ��� : ");
	grade = getchar();

	printf("�й� : %d\n �̸� : %s\n ���� : %c");
	return 0;
}