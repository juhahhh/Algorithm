//https://www.acmicpc.net/problem/1085
// ���簢������ Ż��

#include <iostream>

using namespace std;

int main()
{
	int x, y, w, h;
	int min;

	cin >> x >> y >> w >> h;

	min = h - y;
	
	if (y - 0 < min)
	{
		min = y;
	}
	if (x - 0 < min)
	{
		min = x;
	}
	if (w - x < min)
	{
		min = w - x;
	}
	cout << min;
	


}