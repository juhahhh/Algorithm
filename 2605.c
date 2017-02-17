//https://www.acmicpc.net/problem/2605
// 지역본선 2004 초등부 줄세우기


#include <stdio.h>

int main()
{
	int arr[100];
	int num;
	int i;
	int j;
	int temp;
	int seq = 2;

	scanf("%d", &num);

	memset(arr, -1, 4 * 100);
	/*
	for (i = 0; i < num; i++)
	{
		arr[i] = i + 1;
	}
	*/
	

	for (i = 0; i < num; i++)
	{
		scanf("%d", &temp);

		if (temp == 0)
		{
			arr[i] = i+1;
		}
		else
		{
			for (j = i; j > i - temp; j--)
			{
				arr[j] = arr[j - 1];
			}
			arr[i - temp] = i+1;
		
		}

	}
	
	for (i = 0; i < num; i++)
	{
		printf("%d ", arr[i]);
	}
	
}