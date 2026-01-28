// 다섯 명의 심사위원 점수를 입력하여 
// 유효점수와 평균을 출력하는 프로그램을 작성합니다.
// 유효점수는 최고점과 최저점을 제외한 점수 이며 평균은 유효점수로 계산합니다.

//#### 실행결과
//5명 심사위원의 점수 입력 : 7 9 4 8 5
//유효점수 : 7 8 5
//평균 : 6.7


#include <stdio.h>

// 5명의 점수 입력을 배열로 바꾸기
// 사용자에게 입력을 받아야했음*(수정)
// 5개의 변수를 배열하나로 묶어서 하나라고 생각해보기

// 유효점수, 평균 변수 생성
// 유효점수를 도출해내려면 5명의 점수를 비교해야함
// 이때 쓸 방법은 크기 순으로 정렬해서 가운데 3자리만 출력해보기
// 최저,최고점을 찾아내서 그 점수를 제외시키는 조건문
// 유효점수가 나오면 실수로 평균을 출력해야하기 때문에
// 실수끼리 합을 구해서 실수로 /3을 해준다(유효점수끼리의 평균)

void swap(int *pa, int *pb);  // 서로의 자리를 바꿔주는 함수를 쓰겠다
void line_up(score);

int main(void)
{
	int score[5] = {0};  // 5개의 변수를 배열 하나로 줄임

	printf("5명 심사위원의 점수 입력 : ");
	for (int i = 0; i < 5; i++)  // 배열안에 입력받기 위해
	{
		scanf_s("%d", &score[i]);   // 주소로 받아야함
	}

	int valid_scores[3] = {0};   // 변수를 배열로 변경 
	double average;  // 평균을 실수로 구할 변수


	printf("5명 심사위원의 점수 입력 : %d %d %d %d %d\n",
		score[0], score[1], score[2], score[3], score[4]);

	line_up(&score[0], &score[1], &score[2], &score[3], &score[4]);
	//정렬 시켜주는 함수 호출

	printf("(중간점검) 정렬값 : %d %d %d %d %d\n", 
		score[0], score[1], score[2], score[3], score[4]);
	//눈으로 확인하기 

	valid_scores[0] = score[1];
	valid_scores[1] = score[2];
	valid_scores[2] = score[3];
	average = ((double)valid_scores[0] + (double)valid_scores[1] + (double)valid_scores[2]) / 3;
 
	printf("유효점수 : %d %d %d\n", valid_scores[0], valid_scores[1], valid_scores[2]);
	printf("평균 : %.1lf\n", average);
}

void swap(int *pa, int *pb)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(int *score)
{
	if (score[0] < score[1]) swap (&score[0], &score[1]);
	if (score[1] < score[2]) swap (&score[1], &score[2]);
	if (score[2] < score[3]) swap (&score[2], &score[3]);
	if (score[3] < score[4]) swap (&score[3], &score[4]);
}