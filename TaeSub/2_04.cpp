//4. ���� �򰡷� ���� ������ ���񿡼� �� 10���߿� 1~5������� 100��,
//6~10������� 0������ ����� �� 3������ ����� �Է� �޾� ������ ����� ���� ���α׷��� ������
//(���� 3�� ������ �̿�)
/*
	�Է� �޴°� : ������ ���  * 3 
	(grade1,2,3 <= 5) ? 100 : 0
	x
*/

#include<stdio.h>

int main(void)
{
	int grade1, grade2, grade3;//������ ����� ���� ����
	float total; //���� ����

	printf("����1�� ���: ");
	scanf_s("%d", &grade1);

	printf("����2�� ���: ");
	scanf_s("%d", &grade2);
	
	printf("����3�� ���: ");
	scanf_s("%d", &grade3);

	grade1 = (grade1 <= 5) ? 100 : 0;
	grade2 = (grade2 <= 5) ? 100 : 0;
	grade3 = (grade3 <= 5) ? 100 : 0;

	total = grade1 + grade2 + grade3;

	printf("������ ����� %.1f", (total / 3));
	return 0;

}