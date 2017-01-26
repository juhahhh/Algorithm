#include <stdio.h>

int main()
{
        int caseNum, i, j;
        unsigned long long fiboRes[70];
        unsigned long long result[70];

        scanf("%d", &caseNum);

        fiboRes[0] = 1;
        fiboRes[1] = 1;
        fiboRes[2] = 2;
        fiboRes[3] = 4;

        for(i=4; i<68; i++)
        {
                fiboRes[i] = fiboRes[i-1] + fiboRes[i-2] + fiboRes[i-3] + fiboRes[i-4];
        }

        for(i=0; i<caseNum; i++)
        {
                scanf("%d", &j);
                result[i] = fiboRes[j];
        }

        for(i=0; i<caseNum; i++)
        {
                printf("%llu\n", result[i]);
        }


        return 0;

}

