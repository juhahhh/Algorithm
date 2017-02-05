#include <stdio.h>

int main(void)
{
	int i, temp;
	char input[201] = { 0, };
	char ballCup[4] = { 1, 0, 0, 2 };
	int ballSmall, ballLarge;
	
	gets(input);

	//for (i = 0; i < 200; i++) {
	//	printf("%c", input[i]);
	//}
	
	for (i = 0; i < 200; i++) {
		if (input[i] == 'A')
		{
			temp = ballCup[0];
			ballCup[0] = ballCup[1];
			ballCup[1] = temp;
		}
		else if (input[i] == 'B')
		{
			temp = ballCup[0];
			ballCup[0] = ballCup[2];
			ballCup[2] = temp;
		}
		else if (input[i] == 'C')
		{
			temp = ballCup[0];
			ballCup[0] = ballCup[3];
			ballCup[3] = temp;
		}
		else if (input[i] == 'D')
		{
			temp = ballCup[1];
			ballCup[1] = ballCup[2];
			ballCup[2] = temp;
		}
		else if (input[i] == 'E')
		{
			temp = ballCup[1];
			ballCup[1] = ballCup[3];
			ballCup[3] = temp;
		}
		else if (input[i] == 'F')
		{
			temp = ballCup[2];
			ballCup[2] = ballCup[3];
			ballCup[3] = temp;
		}
	}

	for (i = 0; i < 4; i++) {
		if (ballCup[i] == 1)
			ballSmall = i;
		else if (ballCup[i] == 2)
			ballLarge = i;
	}
	printf("%d\n", ballSmall + 1);
	printf("%d", ballLarge + 1);

	return 0;
}