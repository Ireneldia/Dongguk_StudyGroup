

#include<stdio.h>

int main(void) {
	int N;

	scanf_s("%d", &N);

	for (int i = 1; i <= N; i++) {
		//���� Ƚ�� �ݺ�
		for(int j= N - i;j>=0;j--){
			printf("_");
		}
		for (i; i <= N; i) {
			printf("*");
		}
		printf("\n");

	}
	return 0;
	//�������� *�� ������.... for�� ���� �ѹ� ���캸��

}