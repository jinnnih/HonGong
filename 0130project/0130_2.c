#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)

{

    int choice;  // 사용자의 선택을 저장할 변수

    // 상품 정보

    char* names[] = { "두바이쫀득쿠키","피스타치오롤", "두바이초콜렛" };

    int prices[] = { 15000, 17000, 9000 };

    // 메뉴 출력

    printf("\n=== 디저트 자판기 메뉴 ===\n");

    for (int i = 1; i < 4; i++)
    {
        printf("%d. %s - %d원\n",i,names[i-1],prices[i-1]);
    }

    printf("===========================\n");

    // 선택 입력

    printf("\n상품 번호를 입력해주세요 : ");

    scanf("%d", &choice);
    getchar();

    // 선택 확인

    printf("\n[%s]이(가) 선택되었습니다. %d원입니다.\n",

        names[choice - 1], prices[choice - 1]);


    printf("\n현금이면 1을 입력하고,\n카드라면 2를 입력해주세요.\n(투입은 선택입력으로 대체합니다)\n입력 : ");
    // 자판기에는 글자를 입력하는 키보드는 없기 때문에 숫자로 받기
    
    int pay;                  // 결제 수단 저장 변수
   
    scanf("%d", &pay);        // 결제 수단 입력
   

    if (pay == 1)             // 현금이면
    {
        printf("\n현금\n");
        printf("현금을 투입하세요 : ");
        int money = 0;                          // 투입한 현금
        int price = prices[choice - 1];         // 상품 가격
        int change = 0;                         // 거스름돈 변수

        while (money < price)                   // 투입된 현금이 상품가격보다 작을 때 반복
        {
            int input;                          // 투입되는 현금 저장 변수
            int more = 0;                       // 추가로 필요한 금액 변수

            scanf("%d", &input);                // 투입될 때 input변수에 저장
            
            money += input;                     // 반복할때마다 money에 합산
            more = (prices[choice - 1]) - money;// 추가 필요금액 계산식
            change = money - price;             // 거스름돈 계산식

            // 결과 확인
            printf("\n투입된 금액 %d원\n추가 투입해야할 금액 %d원\n상품 금액 %d원\n", money, more, price);

            if (more > 0)                       // 추가 필요금액이 0보다 클때 더 투입하라는 문구 출력
            {
                printf("\n추가 금액을 투입하세요 : ");
            }
            

        }
        printf("\n구매가 완료되었습니다.\n");  // 거래종료
        if (change != 0) { printf("\n거스름돈 %d원을 받아주세요.", change); }  // 거스름돈이 0이 아닐경우 출력
    }

    else
    {
        printf("\n신용카드\n");   //  금액이 만족 되었을 경우
        int money = 0;
        int price = prices[choice - 1];
        printf("결제 승인완료");

    }


    return 0;

}


