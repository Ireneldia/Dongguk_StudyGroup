#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int N; //ȸ�� �ο� �޴� ��

    scanf_s("%d", &N);

    int* age = (int*)malloc(N * sizeof(int));
    char** name = (char**)malloc(N * sizeof(char*));

    for (int i = 0; i < N; i++) {
        name[i] = (char*)malloc(100 * sizeof(char)); // �̸��� �ִ� 99�� + NULL ����
    }

    // ȸ�� ���� �Է� �ޱ�
    for (int i = 0; i < N; i++) {
        scanf_s("%d %s", &age[i], name[i]);
    }

    // ���̼� ���� (���� ����)
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (age[j] > age[j + 1]) {
                // ���� ��ȯ
                int tempAge = age[j];
                age[j] = age[j + 1];
                age[j + 1] = tempAge;

                // �̸� ��ȯ
                char* tempName = name[j];
                name[j] = name[j + 1];
                name[j + 1] = tempName;
            }
        }
    }

    // ���ĵ� ��� ���
    for (int i = 0; i < N; i++) {
        printf("%d %s\n", age[i], name[i]);
    }

    // ���� �޸� ����
    for (int i = 0; i < N; i++) {
        free(name[i]);
    }
    free(age);
    free(name);

    return 0;
}