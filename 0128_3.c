// 몫과 나머지 입력 프로그램
// 키보드로 입력한 양수를 4로 나누어 
// 몫과 나머지를 변수에 저장하는 함수 만들기
// 다음 main 함수와 실행결과를 참고하여 작성합니다.

/*   main함수
int main(void)
{
    int mod, rem;
    func(&mod, &rem);
    printf("몫 : % d, 나머지 : % d", mod, rem);

    return 0;
}

#### 실행결과
양수 입력 : 9
몫 : 2, 나머지 : 1   */


// 메인문 중간에 호출되는 함수 확인
// 호출하려면 함수 선언부터 작성하기
// 호출할때 포인터찍기
// 호출한 함수 정의할때 계산식 넣기


#include <stdio.h>

void func(int *mod, int *rem);

int main(void)
{
    int mod, rem;
    
    func(&mod, &rem);  // 주소로 호출했다는 것을 주의
    printf("몫 : % d, 나머지 : % d", mod, rem);

    return 0;
}

void func(int* mod, int* rem)
{
    int num;

    printf("양수를 입력하시오 : ");
    scanf("%d", &num);

    *mod = num / 4;
    *rem = num % 4;

}
