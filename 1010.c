#include <stdio.h>

int main()
{
	unsigned long long arr[1000010];
	int num;
	int left;
	int right;
	int i = 0;
	int j = 0;
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;
	for (i = 4; i < 1000005; i++)
	{
		if (i % 3 !=0 && i%2 !=0)
		{
			arr[i] = arr[i - 1] + 1;
		}

	}
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		scanf("%d %d", &left, &right);
		
	}
}