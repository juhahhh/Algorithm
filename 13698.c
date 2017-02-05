#include <stdio.h>
int A(int*);
int B(int*);
int C(int*);
int D(int*);
int E(int*);
int F(int*);


int main()
{
	char input[200];
	int ball[4] = { -1, 0, 0, 1 };
	int num = 0;
	int i = 0;

	int index = 0;
	gets(input);

	for (i = 0;; i++)
	{
		if (input[i] >= 'a' && input[i] <= 'z' || input[i] >= 'A' && input[i] <= 'Z')
		{
		}
		else
		{
			index = i;
			break;
		}
	}

	for (i = 0; i < index; i++)
	{
		if (input[i] == 'A')
		{
			A(ball);
		}
		else if (input[i] == 'B')
		{
			B(ball);
		}
		else if (input[i] == 'C')
		{
			C(ball);
		}
		else if (input[i] == 'D')
		{
			D(ball);
		}
		else if (input[i] == 'E')
		{
			E(ball);
		}
		else if (input[i] == 'F')
		{
			F(ball);
		}
	}
	for (i = 0; i < 4; i++)
	{
		if (ball[i] == - 1)
			printf("%d\n",i+1);
	}
	for (i = 0; i < 4; i++)
	{
		if (ball[i] == 1)
			printf("%d",i+1);
	}

}

int A(int* arr)
{
	int temp;
	temp = arr[0];
	arr[0] = arr[1];
	arr[1] = temp;
}

int B(int* arr)
{
	int temp;
	temp = arr[0];
	arr[0] = arr[2];
	arr[2] = temp;
}

int C(int* arr)
{
	int temp;
	temp = arr[0];
	arr[0] = arr[3];
	arr[3] = temp;
}

int D(int* arr)
{
	int temp;
	temp = arr[1];
	arr[1] = arr[2];
	arr[2] = temp;
}

int E(int* arr)
{
	int temp;
	temp = arr[1];
	arr[1] = arr[3];
	arr[3] = temp;
}

int F(int* arr)
{
	int temp;
	temp = arr[2];
	arr[2] = arr[3];
	arr[3] = temp;
}

