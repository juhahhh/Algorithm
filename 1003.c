#include <stdio.h>

int main()
{
	int arr[45];
	int count[45][2];
	int i;
	int j;
	int num;
	int k;
	int sum_zero = 0;
	int sum_one = 0;
	scanf("%d", &num);

	
	//memset(-1, arr, 45 * 4);
	

	arr[0] = 0;
	arr[1] = 1;
	count[0][0] = 1;
	count[0][1] = 0;
	count[1][0] = 0;
	count[1][1] = 1;





	for (i = 2; i < 44; i++)
	{
		
		sum_zero = count[i - 1][0] + count[i - 2][0];
		sum_one = count[i - 1][1] + count[i - 2][1];
		
		count[i][0] = sum_zero;
		count[i][1] = sum_one;

	}

	for (i = 0; i < num; i++)
	{
		scanf("%d", &k);
		printf("%d %d\n", count[k][0], count[k][1]);
	}

	
}