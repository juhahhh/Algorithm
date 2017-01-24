#include <stdio.h>

int main()
{
        int inputNum = 0;
        int i = 0;
        int coinValue[6] = {500, 100, 50, 10, 5, 1};
        int changeNum[6] = {0, 0, 0, 0, 0, 0};
        int res = 0;

        scanf("%d", &inputNum);
        inputNum = 1000-inputNum;

        while(i < 6) {
                if(coinValue[i] > inputNum)
                {
                        i++;
                }
                else if(coinValue[i] < inputNum)
                {
                        inputNum -= coinValue[i];
                        changeNum[i]++;
                }
                else
                {
                        changeNum[i]++;
                        break;
                }
        }

        for(i=0; i<6; i++) {
                res += changeNum[i];
        }

        printf("%d", res);

        return 0;
}
