//https://www.acmicpc.net/problem/9507
// 그리디 알고리즘 문제 : 꿍이 함수


#include <stdio.h>

unsigned long long koong_fun(unsigned long long* arr, int test);

int main()
{
	int num;
	int i = 0;
	int test;
	unsigned long long koong[70] = { 0 };
	unsigned long long result;

	koong[0] = koong[1] = 1;
	koong[2] = 2;
	koong[3] = 4;

	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		scanf("%d", &test);
		result = koong_fun(koong, test);
		print("%llu\n", result);

	}
	
	
}



unsigned long long koong_fun(unsigned long long* arr, int test)
{
	int i = 4;
	for (i; i < test + 1; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3] + arr[i - 4];
	}
	return arr[test];
}