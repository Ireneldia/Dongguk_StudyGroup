//6. ���� 5���� �Է¹޾� �ּҰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//(���� 3�� ������ �̿�)

#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	int min;
	printf("���� 5���� �Է��ϼ���.: ");
	scanf_s("%d%d%d%d%d", &a, &b, &c, &d, &e);

	min = (a > b) ? b : a;
	min = (c > min) ? min : c;
	min = (d > min) ? min : d;
	min = (e > min) ? min : e;

	printf("�ּڰ���: %d", min);

	return 0;
}