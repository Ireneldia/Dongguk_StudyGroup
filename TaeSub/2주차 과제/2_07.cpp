//7. ���� 2���� �Է� �޾� ������ ���α׷��� �����.�� 0���� ������ error��� ���ڰ� ��µǰ� �Ѵ�.
//(���� 3�� ������ �̿�)

#include<stdio.h>

int main(void)
{
	int num1, num2;
	float tot;

	scanf_s("%d %d", &num1, &num2);
	tot = (num1 / num2);
	(num2 == 0) ? printf("error\n") : printf("%.2f\n", tot);
	return 0;
	

}