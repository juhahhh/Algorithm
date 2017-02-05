//https://www.acmicpc.net/problem/5585
// 그리디 알고리즘 문제 : 거스름돈


#include <stdio.h>
#define money 1000

int main()
{
	int count = 0;
	int change;
	int cost;

	int temp=1;

	int i = 0;
	int dollor[6] = { 500, 100, 50, 10, 5, 1 };

	scanf("%d", &cost);
	change = money - cost;


	while (temp != 0)
	{
		if (change >= dollor[i])
		{
			count = count + change / dollor[i];
			temp = change % dollor[i];
			change = temp;
		}
		i++;

	}
	printf("%d", count);




	return 0;
}

