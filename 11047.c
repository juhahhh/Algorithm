//https://www.acmicpc.net/problem/11047
// 그리디 알고리즘 문제 : 동전 0


#include <stdio.h>

int main()
{
	int num;
	int money;
	int i = 0;
	int value[10] = { 0 };	// 동전의 갯수가 최대 10개 이므로 배열 10개를 잡아놓고 시작
	int max;
	int count = 0;

	scanf("%d %d", &num, &money);  // 동전의 갯수와 총 금액을 입력 받음

	for (i = 0; i < num; i++)		// 동전 금액 입력 받고
	{
		scanf("%d", &value[i]);
		if (money / value[i] > 0)	// 각각의 금액을 입력 받으면서 가장 큰 단위의 인덱스를 찾음
		{
			max = i;
		}
	}

	for (i = max; i >= 0; i--)		// 그 인덱스부터 하나씩 내려가면서
	{
		if (value[i] != 0)
		{
			count = count + (money / value[i]);	 // 동전의 갯수를 몫으로 + 시키고
			money = money % value[i];			// 남은 잔돈을 나머지로 한다.
		}
		if (value[i] == 0)	// 동전의 value가 0이면 (즉, 더 이상 그 이하 동전의 단위가 없다면)
			break;			// 탈출
	}
	printf("%d", count);
}
	


	
	
	