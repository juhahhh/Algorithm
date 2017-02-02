#include <stdio.h>

int main(void)
{
	int i, j, n, k, temp = 0;
	int s = 0;
	int arrA[50];
	int arrB[50];

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arrA[i]);
	}
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arrB[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arrA[i] > arrA[j])
			{
				temp = arrA[i];
				arrA[i] = arrA[j];
				arrA[j] = temp;
			}
		}
	}



	for (i = 0; i < n; i++)
	{
		temp = 0;
		for (j = 0; j < n; j++)
		{
			if (temp <= arrB[j])
			{
				temp = arrB[j];
				k = j;
			}
		}
		//printf("arrA[%d] : %d\n", i, arrA[i]);
		//printf("arrB[%d] : %d\n", k, arrB[k]);
		s += arrA[i] * arrB[k];
		arrB[k] = -1;

		//printf("result : %d\n", s);
	

	}
	/*
	for (i = 0; i<n; i++)
	{
		printf("A[%d] : %d\n", i, arrA[i]);
	}
	for (i = 0; i<n; i++)
	{
		printf("B[%d] : %d\n", i, arrB[i]);
	}
	*/
	printf("%d", s);
	

	return 0;
}
