/* 5. (A + B) % C��((A % C) + (B % C)) % C �� ������ ? (A��B) % C��((A % C) ��(B % C)) % C �� ������ ?
�� �� A, B, C�� �־����� ��, ���� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. */

#include <stdio.h>

int main(void) {
	int a, b, c;

	printf("�� ���� �Է��ϼ��� : ");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("1 : %d\n", (a+b)%c);
	printf("2 : %d\n", ((a%c)+(b%c))%c);
	printf("3 : %d\n", ((a*b)%c));
	printf("4 : %d\n", ((a%c)*(b%c))%c);
	
	return 0;
}