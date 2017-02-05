// https://www.acmicpc.net/problem/1026
// º¸¹° 

#include <stdio.h>

int sort(int* arr, int num);


int main()
{
	int A[50];
	int B[50];
	int num;
	int i = 0;
	int dap = 0;
	int max = -1;
	int index;
	int j = 0;

	memset(A, -1, 4 * 50);
	memset(B, -1, 4 * 50);

	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		scanf("%d", &A[i]);
	}

	for (i = 0; i < num; i++)
	{
		scanf("%d", &B[i]);
	}

	sort(A, num);

	for (i = 0; i < num; i++)
	{
		if (A[i]>=0)
		{
			for (j = 0; j < num; j++)
			{
				if (B[j]>=0)
				{
					if (B[j]>max)
					{
						max = B[j];
						index = j;
					}
				}
			}

		}
		dap = dap + A[i]*max;
		A[i] = -1;
		B[index] = -1;
		max = -1;

	}

	printf("%d", dap);


}


int sort(int* arr, int num)
{
	int i = 0;
	int j = 0;
	int temp;
	for (i = 0; i < num - 1; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			if (arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		
	}
	
	

}