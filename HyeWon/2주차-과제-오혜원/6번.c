/*6. ���� 5���� �Է¹޾� �ּҰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
(���� 3�� ������ �̿�)*/

#include <stdio.h>
int main(void) // ���� 3�� �𸣰��� 
{
	int a, b, c, d, e;
	int min;

	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	
	min=(a < b) ? a : b;
	min = (min < c) ? min : c;
	min = (min < d) ? min : d;
	min = (min < e) ? min : e;
	
	printf("min: %d\n", min);

	return 0;
}
