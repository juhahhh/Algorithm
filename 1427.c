// https://www.acmicpc.net/problem/1427
// 소트 인사이드


#include <stdio.h>
#include <math.h>


int main()
{
	long long num;
	long long i = 1;
	int arr[10];
	long long j = 0;
	int temp;
	int k;
	int t;

	memset(arr, -1, 4 * 10);

	scanf("%lld", &num);

	if (num < 0)
	{
		num = num*(-1);
	}


	for (i = 1000000000; i >0; i = i / 10)
	{
		arr[j] = num / i;
		num = num% i;
		j++;
	}

	
	for (i = 0; i < 10; i++)
	{
		if (arr[i]>0)
		{
			k = i;
			break;
		}
	}

	t = 10 - k;


	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	j = 0;

	for (i = 0; i < t; i++)
	{
		if (arr[i]>=0)
		{
			j = j*10+ arr[i];

			
		}
		
	}
	printf("%lld", j);


}


/* 

참고 할 만한 코드 

#include <stdio.h>
char num[15];

int main() {
int i, j, numlen;
char tmp;
scanf("%s", num);
for (numlen = 0; num[numlen] != '\0'; numlen++);

for (i = 0; i < numlen; i++) {
for (j = i + 1; j < numlen; j++) {
if (num[i] < num[j]) {
tmp = num[i];
num[i] = num[j];
num[j] = tmp;
}
}
}

printf("%s", num);
return 0;
}

*/