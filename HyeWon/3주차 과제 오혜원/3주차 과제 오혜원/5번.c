/*n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

ù° �ٿ� n (1 �� n �� 10,000)�� �־�����.

1���� n���� ���� ����Ѵ�.*/

#include <stdio.h>

int main(void)
{
	int n = 0;
	int nResult = 0;
	scanf_s("%d", &n);
	1 <= n <= 10000;
	for (int b = 1;b <= n;++b)
		nResult += b;

	printf("%d", nResult);

	return 0;
}
