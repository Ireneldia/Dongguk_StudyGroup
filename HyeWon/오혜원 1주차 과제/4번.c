/*4. �� �ڿ��� A�� B�� �־�����. 
�̶�, A+B, A-B, A*B, A/B(��), A%B(������)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
ù° �ٿ� A+B, ��° �ٿ� A-B, ��° �ٿ� A*B, ��° �ٿ� A/B, �ټ�° �ٿ� A%B�� ����Ѵ�.*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b;

	printf("�� ���� �Է��ϼ��� : ");
	scanf_s(" %d %d", &a, &b);

	printf("�� ���� ���� : %d\n", a + b);
	printf("�� ���� ���� : %d\n", abs(a-b));
	printf("�� ���� ���� : %d\n", a*b);
	printf("�� ���� ���� : %d\n", a/b);
	printf("�� ���� �������� : %d\n", a%b);

	return 0; 
} 
//����� �� �� 