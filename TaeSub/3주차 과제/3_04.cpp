//ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����.
//
//�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, �� �ٿ� A�� B�� �־�����. (0 < A, B < 10)
#include<stdio.h>

int main(void) {
	int T; //�׽�Ʈ ���̽��� ����
	int A, B;
	int i = 0;
	
	scanf_s("%d", &T);
	//���� �׽�Ʈ ���̽���ŭ �ݺ��ؾ���
	//while�� ���
	while (i< T) {
		scanf_s("%d %d", &A, &B);
		printf("%d \n", A + B);
		i++;
	}
	return 0;
}
