#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int classes;
	int* student; 
	int dir, subdir; // �������� ������ �� �ִ� �л� ��
	int num1, num2; // ������ ��
	long long total = 0; // �� ������ ��

	scanf("%d", &classes);
	
	student = (int*)malloc(classes * sizeof(int)); // int student[classes];

	for (int i = 0; i < classes; ++i) {
		scanf("%d", &student[i]);
	}
	scanf("%d%d", &dir, &subdir);

	for (int i = 0; i < classes; ++i) {
		if (student[i] <= dir) {
			num2 = 0;
		}
		else {
			num2 = (student[i] - dir + subdir - 1) / subdir;
		}
		total += num2;
	}
	num1 = classes;
	printf("%lld", total + num1);
	free(student);
	return 0;
}