//https://www.acmicpc.net/problem/11047
// �׸��� �˰��� ���� : ���� 0


#include <stdio.h>

int main()
{
	int num;
	int money;
	int i = 0;
	int value[10] = { 0 };	// ������ ������ �ִ� 10�� �̹Ƿ� �迭 10���� ��Ƴ��� ����
	int max;
	int count = 0;

	scanf("%d %d", &num, &money);  // ������ ������ �� �ݾ��� �Է� ����

	for (i = 0; i < num; i++)		// ���� �ݾ� �Է� �ް�
	{
		scanf("%d", &value[i]);
		if (money / value[i] > 0)	// ������ �ݾ��� �Է� �����鼭 ���� ū ������ �ε����� ã��
		{
			max = i;
		}
	}

	for (i = max; i >= 0; i--)		// �� �ε������� �ϳ��� �������鼭
	{
		if (value[i] != 0)
		{
			count = count + (money / value[i]);	 // ������ ������ ������ + ��Ű��
			money = money % value[i];			// ���� �ܵ��� �������� �Ѵ�.
		}
		if (value[i] == 0)	// ������ value�� 0�̸� (��, �� �̻� �� ���� ������ ������ ���ٸ�)
			break;			// Ż��
	}
	printf("%d", count);
}
	


	
	
	