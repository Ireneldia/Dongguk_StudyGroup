/*10. ���ڸ� �Է� �޾� 10����, 16����, 8���� ����� ����ϴ� ���α׷��� �ۼ��ϼ���.*/

#include <stdio.h>

int main(void) {
	int num;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	printf("%d�� 10���� : %d\n", num, num);
	printf("%d�� 8���� : %o\n", num, num);
	printf("%d�� 16���� : %X\n", num, num);

	return 0;
}