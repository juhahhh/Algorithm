// https://www.acmicpc.net/problem/1037
// ¾à¼ö

#include <iostream>


using namespace std;


int main()
{
	unsigned long long  num;
	unsigned long long  arr[52];
	unsigned long long temp;
	int end = 0;
	
	//memset(arr, -1, 4 * 52);
	fill_n(arr, 52, 1);


	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}


	for (int i = arr[0]+1; i; i++)
	{
		for (int j = 0; j < num; j++)
		{
			temp = temp + i%arr[j];
			
		}
		if (temp == 0)
		{
			cout << i;
			end = 1;
			break;
		}
		else
			temp = 0;
		
		if (end == 1)
			break;

	}


	
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = i + 1; j < num; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}


}