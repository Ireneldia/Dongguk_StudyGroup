#include<stdio.h>

int main(void) {
	int N = 0;
	int Max = -1000000, Min = 1000000;//�ִ� �ּ� ����
	scanf_s("%d", &N);

	for (int i = 0; i < N; i++) {
		//�ִ� �ּ� ����
		int num = 0; //�Է��� ��
		
		scanf_s("%d", &num);

		if (num > Max)
			Max = num;
		//else�� �׳� pass�ϸ� �ɵ�?
			
		if (num < Min)
			Min = num;
	}
	printf("%d %d", Max, Min);
	return 0;
}