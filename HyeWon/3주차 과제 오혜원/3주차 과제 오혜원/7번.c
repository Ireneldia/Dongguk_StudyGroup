/*������ ���� ��Ģ�� ������ �ڿ� ���� ��� ������.
ù° �ٿ� N(1 �� N �� 100)�� �־�����.
ù° �ٺ��� 2��N-1��° �ٱ��� ���ʴ�� ���� ����Ѵ�.*/

#include <stdio.h>

int main(void)
{
	int n = 0;
	scanf_s("%d", &n);

	for (int i = 1;i <= n; ++i)
	{
		for (int j = 1;j <= n-1+i; ++j)
		{
			if (j <= n - i)
				printf(" ");
			else
				printf("*");
		}
		putchar('\n');
	}

	for (int i = 1;i < n;++i)
	{
		for (int j = 1;j <= 2*n -1-i; ++j)
		{
			if (i < j && j <= 2*n - 1 - i) //�������� ���� ����� �������� �ʵ�
				printf("*");
			else
				printf(" "); 
		}
		putchar('\n');
	}

	return 0; 
}