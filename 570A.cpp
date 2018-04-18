/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005



int main()
{
    int N,M,max,winner,i,j,vote;
    int candi[MAX]={0,},city[MAX];

    scanf("%d%d",&N,&M);

    while(M--)
    {
        max=0;
        winner=0;
        for(i=0;i<N;i++)
        {
            scanf("%d",&vote);
            if(vote>max)
            {
                max=vote;
                winner=i;
            }

        }
        candi[winner]++;
    }
    max=0;
    winner=0;
    for(i=0;i<N;i++)
    {
        if(candi[i]>max)
        {
            max=candi[i];
            winner=i;
        }
    }
    printf("%d\n",winner+1);



    return 0;


}
