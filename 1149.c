#include <stdio.h>

int min(int arr[][3], int num, int max);

int main()
{
	int paint[1000][3] = { 0 };
	int num;
	int i = 0;
	int j = 0;
	int value = 0;
	int minvalue = 0;
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &paint[i][j]);
		}
	}


	value = min(paint, num);

	//for (i = 0; i < num; i++)
	//{
	//	value = min(paint,i,num);
	//	minvalue = minvalue + value;
	//}
	printf("%d", minvalue);

}

int min(int arr[][3],int num)
{
	int i = 0;
	int k = 0;
	int temp = 0;
	int min = 9999;
	int dap = 0;
	
	for (i = 0; i < 3; i++)
	{
		for (k = 0; k< num; k++)
		{
			if (arr[k][i] != -1)
			{
				if (min > arr[k][i])
				{
					min = arr[k][i];
					temp = k;
				}
			}
		}
		if (k == 0)
		{
			arr[k + 1][i] = -1;
		}
		else if (k == num - 1)
		{
			arr[k - 1][i] - 1;
		}
		else
		{
			arr[k + 1][i] = -1;
			arr[k - 1][i] = -1;
		}
	}

	/*
	for (i = 0; i < 3; i++)
	{
		if (arr[num][i] != -1)
		{
			if (min > arr[num][i])
			{
				min = arr[num][i];
				k = i;
			}
		}
	}
	*/
	if (num != 0 || num != max)
	{
		arr[num + 1][k] = -1;
	}
	return min;

}