//1. �� �ڿ��� A�� B�� �־�����.
//�̶�, A + B, A - B, A* B, A / B(��), A% B(������)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//ù° �ٿ� A + B, ��° �ٿ� A - B, ��° �ٿ� A* B, ��° �ٿ� A / B, �ټ�° �ٿ� A% B�� ����Ѵ�.
#include<stdio.h>

int main(void)
{
	int A, B;
	scanf_s("%d", &A);
	scanf_s("%d", &B);
	printf("A+B= %d \n", A + B);
	printf("A-B= %d \n", A - B);
	printf("A*B= %d \n", A * B);
	printf("A/B= %d \n", A / B);
	printf("A%%B= %d \n", A % B);

	return 0;

}