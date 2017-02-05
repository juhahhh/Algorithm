#include <stdio.h>

int drunken(int, int*);

int main()
{
	int prison[101];
	int i = 0;
	int num;
	int room;
	int sol = 0;

	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		memset(prison, -1, 4 * 101);
		scanf("%d", &room);
		sol = drunken(room, prison);
		printf("%d\n", sol);
	}
}

int drunken(int room, int* arr)
{
	int i = 0;
	int j = 0;
	int dap=0;
	for (i = 1; i <= room; i++)
	{
		for (j = i; j <= room; j=j+i)
		{
			if (arr[j] == 1)
			{
				arr[j] = -1;
			}
			else if (arr[j] == -1)
			{
				arr[j] = 1;
			}
		}
		if (arr[i] == 1)
		{
			dap++;
		}
	}
	return dap;

}

