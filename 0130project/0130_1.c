#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)

{

    int choice;  // 사용자의 선택을 저장할 변수

    // 상품 정보

    char* names[] = { "두바이쫀득쿠키","피스타치오롤", "두바이초콜렛" };

    int prices[] = { 15000, 17000, 9000 };

    // 메뉴 출력

    printf("=== 디저트 자판기 메뉴 ===\n");

    for (int i = 1; i < 4; i++)
    {
        printf("%d. %s - %d원\n",i,names[i-1],prices[i-1]);
    }

    printf("===============\n");

    // 선택 입력

    printf("상품 번호를 입력해주세요 : ");

    scanf("%d", &choice);

    // 선택 확인

    printf("\n[%s]이(가) 선택되었습니다. %d원입니다.\n",

        names[choice - 1], prices[choice - 1]);

    return 0;

}
