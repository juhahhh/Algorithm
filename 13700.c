#include <stdio.h>

int main()
{
	int map[100001];
	int build_num;
	int bomul;
	int house;
	int front;
	int back;
	int police;
	int temp;
	int count = 0;
	int i = 0;
	int location;
	//int check[10000];

	// 경찰서는 0
	// 일반 건물 1
	// 금은방은 2
	// 집은 3
	memset(map, 0, 4 * 100001);
	//memset(check, -1, 4 * 100001);


	scanf("%d %d %d %d %d %d", &build_num, &bomul, &house, &front, &back, &police);
	memset(map, 1, 4 * (build_num + 1));
	map[0] = 0;

	for (i = 0; i < police; i++)
	{
		scanf("%d", &temp);
		map[temp] = 0;
	}


	map[bomul] = 2;
	map[house] = 3;
	location = bomul;


	if (house > bomul)
	{
		while (1)
		{
			if (map[location + front] != 0)
			{
				location = location + front;
				count++;


			}
			else if (map[location - back] != 0)
			{
				location = location - back;
				count++;

			}
			/*
			else if (map[location + front] == 0)
			{
			location = location - back;

			count++;

			}
			*/

			/*
			else if (map[location - back] == 0)
			{
			location = location + front;
			count++;


			}
			*/


			if (map[location] == 3)
			{
				printf("%d", count);
				return 0;
			}

			if (count > 100000)
			{
				printf("BUG FOUND");
				return 0;
			}
		}
	}

	if (house < bomul)
	{
		while (1)
		{
			if (map[location - back] != 0)
			{
				location = location - back;
				count++;

			}
			else if (map[location + front] != 0)
			{
				location = location + front;
				count++;


			}
			/*
			else if (map[location - back] != 0)
			{
			location = location - back;
			count++;

			}*/
			/*
			else if (map[location + front] == 0)
			{
			location = location - back;

			count++;

			}


			else if (map[location - back] == 0)
			{
			location = location + front;
			count++;


			}
			*/

			if (map[location] == 3)
			{
				printf("%d", count);
				return 0;
			}

			if (count > 10000)
			{
				printf("BUG FOUND");
				return 0;
			}
		}
	}

}