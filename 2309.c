// https://www.acmicpc.net/problem/2309
// �������� 2004 �ʵ�� �ϰ������� 

#include <stdio.h>

int main()
{
	int temp;
	int i;
	int j;
	int arr[9];
	int sum = 0;
	
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
		sum = sum + arr[i];
	}
	
	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			if (arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			if (arr[i] + arr[j] == sum - 100)
			{
				arr[i] = -1;
				arr[j] = -1;
			}
		}
	}
	
	for (i = 0; i < 9; i++)
	{
		if (arr[i]>0)
		{
			printf("%d\n", arr[i]);
		}
	}



}