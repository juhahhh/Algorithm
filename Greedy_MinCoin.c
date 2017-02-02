#include <stdio.h>

int main(void)
{
	int coinType, coinSum, i, temp;
	int coinValue[10] = { 0, };
	int coinNum[10] = {0,};
	int result = 0;

	scanf("%d", &coinType);
	scanf("%d", &coinSum);
	for (i = 0; i < coinType; i++)
		scanf("%d", &coinValue[i]);

	for (i = 1; i <= coinType; i++)
	{
		if (coinValue[coinType - i] <= coinSum)
		{

			temp = coinSum/coinValue[coinType - i];
			coinNum[coinType - i] = temp;
			coinSum -= temp*coinValue[coinType - i];
		}
	}

	for (i = 0; i < coinType; i++)
		result += coinNum[i];

	printf("%d", result);

	return 0;


}