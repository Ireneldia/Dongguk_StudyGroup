#include<stdio.h>

int main(void) {
	int N, V;//�־��� ������ ��� 
	int nList[10000];//�⺻ 1���� �迭 ����
	int count = 0;//

	scanf_s("%d", &N);
	

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &nList[i]);//����Ʈ�� �������� �����ϱ�
	}
	scanf_s("%d", &V);

	for (int j = 0; j < N; j++) {
		if (nList[j] == V) {
			count++;
		}
	}
	printf("%d", count);

	return 0;
}