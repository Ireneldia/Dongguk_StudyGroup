/*
7. ���� 2���� �Է� �޾� ������ ���α׷��� �����. �� 0���� ������ error��� ���ڰ� ��µǰ� �Ѵ�.
(���� 3�� ������ �̿�)
*/
#include <stdio.h>

int main(void) {
	int a, b;

	printf("���ڸ� �Է��ϼ���:");
	scanf_s("%d%d", &a, &b);

	b == 0 ? printf("error") : printf("%.2f", (double)a / b);
	
	return 0;
}