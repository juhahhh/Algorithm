//https://www.acmicpc.net/problem/1110
// 더하기 사이클

#include <iostream>

using namespace std;

int main()
{
	int num;
	int num2[3];
	int sol=-1;
	int first;
	int count = 0;
	int temp;

	cin >> num;

	if (num < 10)
	{
		num2[0] = 0;
	}
	else
	{
		num2[0] = num / 10;
	}
	num2[1] = num % 10;


	while (sol != num)
	{
		first = num2[0] + num2[1];
		num2[0] = num2[1];
		num2[1] = first%10;
		sol = 10 * num2[0] + num2[1];
		count++;

	}
	cout << count;

	

	 
}