#include <stdio.h>

int main(void)
{
	int input, i, j;
	unsigned long long output;
	unsigned long long arrT[35] = { 1, 0, };

	scanf("%d", &input);

	for (i = 1; i <= input; i++)
	{
		for (j = 0; j < i; j++)
		{
			arrT[i] += arrT[j] * arrT[i - j - 1];
		}
	}

	printf("%llu", arrT[input]);

	return 0;

}