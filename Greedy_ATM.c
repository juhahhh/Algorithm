#include <stdio.h>
#include <stdlib.h>

int main()
{
        int i, j, personNum;
        int *P;
        int temp;

        scanf("%d\n", &personNum);

        P = (int*) malloc(sizeof(int)*personNum);

        for(i=0; i<personNum; i++)
        {
                scanf("%d", &P[i]);
        //      printf("P[%d] : %d\n", i, P[i]);
        }

        for(i=0; i<personNum; i++)
        {
                for(j=0; j<personNum; j++)
                {
                        if(P[i] < P[j])
                        {
                                temp = P[i];
                                P[i] = P[j];
                                P[j] = temp;
                        }
                }
        }

        temp = 0;
        for(i=0; i<personNum; i++)
        {
        //      printf("P[%d] : %d\n", i, P[i]);
                temp += (personNum-i)*P[i];
        }

        printf("%d", temp);

        return 0;
}
