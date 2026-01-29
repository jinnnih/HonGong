
/*[쉬움] 버퍼 연습 문제 1 문제
이름(문자 1개)과 나이(숫자)를 입력받아 출력하세요.
예상 출력 :
*-------------------- -
*이름 첫 글자 입력 : K
* 나이 입력 : 25
* 이름 : K, 나이 : 25
* -------------------- -
조건 :
    *-이름은 getchar()로 입력
    * -나이는 scanf()로 입력
    * -입력 순서 : 이름 먼저, 나이 나중
  */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

    int main(void)
{
    int name;   // 이름 첫 글자
    int age;    // 나이

    // 여기에 코드를 작성하세요
    printf("이름 첫 글자 입력 : ");

    // TODO: 이름 입력 (getchar 사용)
    name = getchar();

    // TODO: 버퍼 비우기 필요할까요?
    getchar();
    printf("나이 입력 : ");

    // TODO: 나이 입력 (scanf 사용)
    scanf("%d", &age);
    getchar();

    printf("이름: % c, 나이 : % d\n", name, age);

    return 0;
}



/* [중간] 버퍼 연습 문제 2
문제: 학생 정보를 입력받아 출력하세요.
 -학번(숫자)
 -이름 첫 글자(문자)
 -학점(문자 : A, B, C, D, F)

        *예상 출력 :
    *-------------------- -
        *학번 입력 : 20240001
        * 이름 첫 글자 입력 : K
        * 학점 입력 : A
        *
        *== = 학생 정보 == =
        *학번 : 20240001
        * 이름 : K
        * 학점 : A
        * -------------------- -
        *
        *조건 :
        *-적절한 곳에 버퍼 비우기 사용
        * -getchar() 사용
        */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

        int main(void)
    {
        int studentId;    // 학번
        int name;         // 이름 첫 글자
        int grade;        // 학점

        // 학번 입력
        printf("학번 입력 : ");
        // TODO: 학번 입력
        scanf("%d",&studentId);

        // TODO: 버퍼 비우기 필요?
        getchar();

        // 이름 입력
        printf("이름 첫 글자 입력 : ");
        // TODO: 이름 입력
        name = getchar();

        // TODO: 버퍼 비우기 필요?
        getchar();

        // 학점 입력
        printf("학점 입력 : ");
        // TODO: 학점 입력
        grade = getchar();

        // 결과 출력
        printf("\n == = 학생 정보 == = \n");
        printf("학번: % d\n", studentId);
        printf("이름: % c\n", name);
        printf("학점: % c\n", grade);

        return 0;
    } 






/*
* [어려움] 버퍼 연습 문제 3
*
*문제: 여러 학생의 정보를 반복해서 입력받으세요.
* -몇 명 ? (숫자)
* -각 학생마다 : 학점(문자), 점수(숫자)
*
* 예상 출력 :
*-------------------- -
*학생 수 입력 : 2
*
*[1번 학생]
* 학점 입력(A - F) : A
* 점수 입력 : 95
*
*[2번 학생]
* 학점 입력(A - F) : B
* 점수 입력 : 85
*
*== = 결과 == =
*1번 : A(95점)
* 2번 : B(85점)
* -------------------- -
*
*조건 :
    *-최대 5명까지 입력 가능
    * -배열 사용
    * -적절한 곳에 버퍼 비우기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int count;           // 학생 수
    char grades[5];      // 학점 배열
    int scores[5];       // 점수 배열
    int i;               // 반복 변수

    // 학생 수 입력
    printf("학생 수 입력 : ");
    // TODO: 학생 수 입력 (1~5 사이)
    scanf("%d", &count);
    // TODO: 버퍼 비우기?
    getchar();

    // 각 학생 정보 입력
    for (i = 0; i < count; i++)
    {
        printf("\n[% d번 학생]\n", i + 1);

        printf("학점 입력(A - F) : ");
        // TODO: 학점 입력
        grades[i] = getchar();

        // TODO: 버퍼 비우기?
        getchar();

        printf("점수 입력 : ");
        // TODO: 점수 입력
        scores[i] = getchar();

        // TODO: 버퍼 비우기? (다음 반복을 위해)
        getchar();
    }

    // 결과 출력
    printf("\n == = 결과 == = \n");
    for (i = 0; i < count; i++)
    {
        printf(" % d번: % c(% d점)\n", i + 1, grades[i], scores[i]);
    }

    return 0;
}
