//������ �׽�Ʈ ���̽� T�� �Է¹����� ninput
#include<stdio.h>

int main(void) {
	int T = 0;
	//int sum =0; �� ��ġ�� ������ �ȵǴ� ����
	scanf_s("%d", &T);//�׽�Ʈ Ƚ�� 

	for (int i = 0; i < T; i++) {
		int num = 0; //�ڿ����� ����
		int sum = 0; // ���⼭ sum������ for�� ���� �ȿ��� �ʱ�ȭ �Ǳ� ������
		scanf_s("%d", &num);
		for (int j = 0; j < num; j++) { //�� �Է��Ҷ� ���ٷ� �ص� �Ǵ±�...
			int nInput;
			scanf_s("%d", &nInput);
			sum += nInput;
		}
		printf("%d\n", sum);

	}
	return 0;

}