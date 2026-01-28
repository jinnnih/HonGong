// 다섯 명의 심사위원 점수를 입력하여 
// 유효점수와 평균을 출력하는 프로그램을 작성합니다.
// 유효점수는 최고점과 최저점을 제외한 점수 이며 평균은 유효점수로 계산합니다.

//#### 실행결과
//5명 심사위원의 점수 입력 : 7 9 4 8 5
//유효점수 : 7 8 5
//평균 : 6.7


#include <stdio.h>

// 5명의 점수 입력 변수 만들기
// 유효점수, 평균 변수 생성 총 변수 5개
// 유효점수를 도출해내려면 5명의 점수를 비교해야함
// 이때 쓸 방법은 크기 순으로 정렬해서 가운데 3자리만 출력해보기
// 최저,최고점을 찾아내서 그 점수를 제외시키는 조건문
// 유효점수가 나오면 /5 해서 평균값 변수에 저장

void swap(int *pa, int *pb);  // 서로의 자리를 바꿔주는 함수를 쓰겠다
void line_up(int *p1, int *p2, int *p3, int *p4, int *p5);

int main(void)
{
	int p1 = 7, p2 = 9, p3 = 4, p4 = 8, p5 = 5;
	int valid_scores1, valid_scores2, valid_scores3;  // 세개의 값을 저장해야해서 늘어남
	double average;


	printf("5명 심사위원의 점수 입력 : %d %d %d %d %d\n", p1, p2, p3, p4, p5);

	line_up(&p1, &p2, &p3, &p4, &p5);  // 정렬시켜주는 함수 
	printf("(중간점검) 정렬값 : %d %d %d %d %d\n", p1, p2, p3, p4, p5); 
	//눈으로 확인하기 

	valid_scores1 = p2;
	valid_scores2 = p3;
	valid_scores3 = p4;
	average = ((double)valid_scores1+ (double)valid_scores2+ (double)valid_scores3) / 3;
 
	printf("유효점수 : %d %d %d\n", valid_scores1, valid_scores2, valid_scores3);
	printf("평균 : %.1lf\n", average);
}

void swap(int *pa, int *pb)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(int* p1, int* p2, int* p3, int* p4, int* p5)
{
	if (*p1 < *p2) swap(p1, p2);
	if (*p1 < *p3) swap(p1, p3);
	if (*p1 < *p4) swap(p1, p4);
	if (*p1 < *p5) swap(p1, p5);
	if (*p2 < *p3) swap(p2, p3);
	if (*p2 < *p4) swap(p2, p4);
	if (*p2 < *p5) swap(p2, p5);
	if (*p3 < *p4) swap(p3, p4);
	if (*p3 < *p5) swap(p3, p5);
	if (*p4 < *p5) swap(p4, p5);
}