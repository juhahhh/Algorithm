#include <stdio.h>

int main()
{
	int n, m;
	int i = 0;
	int j = 0;
	scanf("%d %d", &n, &m);
	int cho[330][330] = { 0 };
	cho[1][1] = 0;
	cho[2][1] = cho[1][2] = 1;



	for (i = 3; i < 330; i++)
	{
		cho[i][1] = cho[i-1][1]+1;
		cho[1][i] = cho[1][i-1]+1;
	}



	for (i = 2; i < 330; i++)
	{
		for (j = 2; j < 330; j++)
		{
			if (cho[i][j] == 0)
			{
				cho[i][j] = cho[i - 1][j] + cho[1][j] + 1;
			}
		}
	}

	for (i = 1; i < n + 1; i++)
	{
		for (j = 1; j < m + 1; j++)
		{
			printf("%d ", cho[i][j]);
		}
		printf("\n");
	}

	
	printf("%d", cho[n][m]);
	return 0;
}
