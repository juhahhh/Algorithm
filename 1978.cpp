// https://www.acmicpc.net/problem/1978
// 소수 찾기


#include <iostream>

using namespace std;

int main()
{
	int count;
	int num;
	int temp;
	cin >> num;
	count = num;
	for (int i = 0; i < num; i++)
	{
		cin >> temp;
		if (temp != 1)
		{
			for (int j = temp - 1; j > 1; j--)
			{
				if (temp%j == 0)
				{
					count--;
					break;
				}

			}
		}
		if (temp == 1)
		{
			count--;
		}
	}
	
	cout << count;
}