/*3. num1�̶�� ���ڸ� �Է¹޾� 50���� ������ num2�� 0, ũ�� 100�� ����ϴ� ���α׷��� ������
(���� 3�� ������ �̿�)*/

#include <stdio.h>
int main(void)
{
	int num1 = 0, num2=0 ;
	printf("NUM:");
	scanf_s("%d", &num1);
	num2 = (num1 > 50) ? 100 : 0;

	printf("NUM2: %d", num2);
	return 0;
}//70 �־��µ� �� 0���� �����°���