//6. ���� 5���� �Է¹޾� �ּҰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//(���� 3�� ������ �̿�)
/* 
* if else ���� ���� �ʹ�...
* �ּҰ��� ���Ϸ��� �ϴ� ũ�� �Ǵ��� �ؾ߰���?
* ����
* min
*/
#include<stdio.h>

int main(void)
{
	int num1, num2, num3, num4, num5;
	int min;
	scanf_s("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

	min = (num1 < num2) ? num1 : num2;
	min = (min < num3) ? min : num3;
	min = (min < num4) ? min : num4;
	min = (min < num5) ? min : num5;

	printf("�ּҰ�: %d", min);
	return 0;
}