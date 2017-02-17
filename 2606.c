#include <stdio.h>
int input(int(*arr)[120], int, int);
int check(int* arr, int a);


int main()
{
	int virus[120][120];
	int arr[120];
	int num;
	int i = 0;
	int computer;
	int a, b;
	int j = 0;
	int k = 0;

	scanf("%d", &computer);
	scanf("%d", &num);

	for (i = 0; i < 120; i++)
	{
		memset(virus[i], -1, 4 * 120);
	}
	memset(arr, -1, 4 * 120);

	for (i = 0; i < num; i++)
	{
		scanf("%d %d", &a, &b);
		input(virus, a, b);
	}


	for (i = 1; i < 110; i++)
	{
		for (j = 0; j < 110; j++)
		{
			if (check(virus[0], i + 1) == 1)
			{
				if (virus[i][j] != -1)
				{
					arr[k] = virus[i][j];
					k++;
				}
				else
				{
					break;
				}
			}
		}

	}


	for (i = 0; i < 110; i++)
	{
		if (arr[i] == -1)
		{
			k = i;
			break;
		}
	}



	for (i = 0; i < 110; i++)
	{
		if (virus[0][i] != -1)
		{
			arr[k] = virus[0][i];
			k++;
		}
		else
			break;
	}






	for (i = 0; i<109; i++)
	{
		for (j = i + 1; j < 110; j++)
		{
			if (arr[i] != -1 && arr[j] != -1)
			{
				if (arr[i] > arr[j])
				{
					k = arr[i];
					arr[i] = arr[j];
					arr[j] = k;
				}
			}
		}
	}
	k = 0;
	for (i = 0; i < 110; i++)
	{
		if (arr[i] != -1)
		{
			if (arr[i] != arr[i + 1])
			{
				k++;
			}
		}
		else
			break;
	}

	printf("%d", k);


}

int input(int(*arr)[120], int a, int b)
{
	int i = 0;
	for (i = 0; i < 120; i++)
	{
		if (arr[a - 1][i] == -1)
		{
			arr[a - 1][i] = b;
			break;
		}
	}

}

int check(int* arr, int a)
{
	int i = 0;
	int j = 0;
	for (i = 0; arr[i] != -1; i++)
	{
		if (arr[i] == a)
		{
			return 1;
		}
	}

	for (i = 0; i < 110; i++)
	{
		if (arr[i] == a)
		{
			return 1;
		}
		else
			break;
	}
}
