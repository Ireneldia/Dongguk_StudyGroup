// 6. 국어, 영어, 수학 점수를 저장할 변수(kor, eng, mat)를 선언하고 각각 70, 80, 90점으로 초기화합니다.
// 총점을 저장할 변수(tot)를 선언하여 세 과목의 합을 구하고 세 과목의 점수와 총점을 출력하는 프로그램을 작성하세요.
#include<stdio.h>

int main(void)
{
    
    int kor = 70;
    int eng = 80;
    int mat = 90;
    int tot = kor + eng +mat ;

    printf("세 과목 점수의 합 : %d \n", tot);
    printf("국어 : %d \n 영어 : %d \n 수학 %d \n", kor ,eng, mat);
    
    return 0;
}