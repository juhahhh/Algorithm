//https://www.acmicpc.net/problem/11399
// 그리디 방법을 이용한 줄서기(ATM) 문제

#include <stdio.h>
int swap(int*, int);

int main()
{
	int human;
	int waiting[1001] = { -1 };
	int i = 0;
	int max = 0;
	scanf("%d", &human);
	for (i; i < human; i++)
	{
		scanf("%d", &waiting[i]);
	}
	swap(waiting, human);
	for (i = 1; i <= human; i++)
	{
		max = max + waiting[i - 1] * i;
	}
	printf("%d", max);
	return 0;
}

int swap(int* waiting, int num)
{
	int temp;
	int i = 0;
	int j = 1;
	for (i = 0; i < num-1; i++)
	{
		for (j = i+1; j < num; j++)
		{
			if (waiting[i] < waiting[j])
			{
				temp = waiting[i];
				waiting[i] = waiting[j];
				waiting[j] = temp;

			}
		}
	}
}