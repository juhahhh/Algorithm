#include <stdio.h>

void doGame(int roomNum, int round);

int room[101];

int main()
{
	int caseNum, roomNum, i, j;
	int result = 0;

	scanf("%d", &caseNum);


	for (j = 0; j < caseNum; j++)
	{
		memset(&room[0], 0, sizeof(int) * 100);
		result = 0;
		scanf("%d", &roomNum);


		for (i = 1; i <= roomNum; i++)
		{
			doGame(roomNum, i);
		}

		for (i = 1; i <= roomNum; i++)
		{
			if (room[i] == 1)
				result++;
		}

		printf("%d\n", result);
	}

	return 0;
}

void doGame(int roomNum, int round)
{
	int i;

	if (round == 1)
	{
		for (i = 1; i <= roomNum; i++)
		{
			room[i] = 1;
		}
	}
	else if (round == 2)
	{
		for (i = 2; i <= roomNum; i+=2)
		{
			room[i] = 0;
		}
	}
	else
	{
		for (i = round; i <= roomNum; i += round)
		{
			if (room[i] == 0)
				room[i] = 1;
			else
				room[i] = 0;
		}
	}

}
