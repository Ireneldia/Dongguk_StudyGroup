/*
3. num1�̶�� ���ڸ� �Է¹޾� 50���� ������ num2�� 0, ũ�� 100�� ����ϴ� ���α׷��� ������
(���� 3�� ������ �̿�)
*/
#include <stdio.h>

int main(void) {
	int num1;

	printf("���ڸ� �Է��ϼ���:");
	scanf_s("%d", &num1);

	int num2 = num1 >= 50 ? 100 : 0;
	printf("num2 : %d", num2);

	return 0;
}