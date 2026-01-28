// 소수는 1과 자신외에는 나누어 떨어지는 수가 없는 수
// 2 3 5 7 11
// 2부터 32767까지의 모든 수로 나누었을때 한번도 떨어지지않는다면 소수임

#include <stdio.h>
prime_check(); // 함수선언

int main(void)
{
	//정수를 인수로 받아 소수면 1 아니면 0 반환
	// if ()가 들어가겠구나
	// 소수 체크가 필요하겠구나

	int res; 
	int prime_check = 32767;
	res = prime_check;


	if (res == 1)
	{
		printf("소수입니다.\n");
	}
	else
	{
		printf("소수가 아닙니다.\n");
	}

	return 0;

}

prime_check(int i)
{
	for (i = 2; i < n; i++)
	{
		(n % i) == 0;
		return 0;   // 나누어 떨어질 때 0을 반환한다.
	}
	return 1; // for문에서 반환하지 않고 반복 모두 수행한 경우는 
	// 한번도 나누어 떨어지지 않는 것이므로 소수임
}

