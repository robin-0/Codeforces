/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);


int main()
{
    int d,sum,schedule[1000],max[1000],min[1000],temp,i,summin,summax,incri;

    while(scanf("%d%d",&d,&sum)!=EOF)
    {
        summin=0;
        summax=0;

        for(i=0;i<d;i++)
            {
                scanf("%d%d",&min[i],&max[i]);
                summin+=min[i];
                summax+=max[i];
            }

        if(sum<=summax&&sum>=summin)
        {
            printf("YES\n");

            for(i=0;i<d;i++)
                schedule[i]=min[i];

            temp=sum-summin;

            for(i=0;i<d;i++)
            {
                incri=max[i]-min[i];

                if(incri<=temp)
                {
                    schedule[i]=max[i];
                    temp-=incri;
                }

                else
                {
                    schedule[i]+=temp;
                    temp=0;
                    break;
                }
            }

            printf("%d",schedule[0]);
            for(i=1;i<d;i++)
                printf(" %d",schedule[i]);
            printf("\n");
        }
        else
        {
            printf("NO\n");
        }


    }

    return 0;

}
