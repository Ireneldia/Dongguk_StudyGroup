// 2. char, short, int, long, long long �ڷ����� ũ�⸦ ���ϴ� ���α׷��� �ۼ��ϼ���.

#include <stdio.h>

int main(void) {
	printf("char�� ũ�� : %d\n", sizeof(char));
	printf("short�� ũ�� : %d\n", sizeof(short));
	printf("int�� ũ�� : %d\n", sizeof(int));
	printf("long�� ũ�� : %d\n", sizeof(long));
	printf("long long�� ũ�� : %d\n", sizeof(long long));

	return 0;
}