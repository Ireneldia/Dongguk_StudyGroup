//10. �� ������ �Է¹޾� ���� ���ϼ���(��, ū ������ ���� ���� �� �׻� ����� ������ �Ѵ�)
#include <stdio.h>


int main(void)
{
	int num1, num2;
	int result;
	
	printf("num1 : ");
	scanf_s("%d", &num1);
	printf("num2 : ");
	scanf_s("%d", &num2);


	result = (num1 - num2) > 0 ? num1 - num2 : num2 - num1;
	printf("�� ������ ���� : %d",result );
	return 0;

}
