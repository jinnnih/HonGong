// 반복적으로 양수를 입력받아 총합을 구하는 프로그램
// 0이나 음수 입력시 반복을 끝내고 그동안 누적한 합 출력하기
// 처음부터 0이나 음수가 입력되면 바로 반복 끝내고 0출력

/*
* 입력값 저장 변수 선언 후 gets 사용해보기 << gets는 문자열전용이라 xx 
* 반복해서 입력할 수 있도록 반복문 짜기=
* 합을 구해주는 함수를 짜고
* if 문으로 호출해서 합을 구하기 ( 합을 구하는것을 else로)
* if 조건에 0이나 음수 입력 값을 넣을것
*/


#include <stdio.h>

void add_res(int a, int b);

int main(void)
{
	int num[10] = {0};

	while (num > 0)
	{
		printf("양수 입력: ");
		scanf("%d\n", &num[10]);
		printf("입력 값 : %d\n", num[10]);
	}

	
	return 0;
}