/*
6. ���� 5���� �Է¹޾� �ּҰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
(���� 3�� ������ �̿�)
*/
#include<stdio.h>

int main(void) {
	int a, b, c, d, e;
	printf("���� 5���� �Է��ϼ���:");
	scanf_s("%d%d%d%d%d", &a, &b, &c, &d, &e); 

	int min1 = a < b ? a : b;
	int min2 = c < d ? c : d;
	int min3 = min1 < min2 ? min1 : min2;
	int min4 = min3 < e ? min3 : e;
	printf("%d", min4);
}