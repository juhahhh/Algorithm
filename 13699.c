#include <stdio.h>
int main()
{
	unsigned long long fire[40];
	int num;
	int i = 0;
	unsigned long long dap = 0;
	int j = 0;
	scanf("%d", &num);

	memset(fire, 0, 8*40);
	
	fire[0] = 1;
	fire[1] = 1;

	for (i = 2; i < 35; i++)
	{
		for (j = 0; j < i; j++)
		{
			fire[i] = fire[i] + fire[j] * fire[i - (j + 1)];
		}
	}

	printf("%llu", fire[num]);

}