/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long long int S,x[2000],y[2000],n,i,key[2],j,test;

    while((scanf("%lld%lld",&S,&n))!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%lld%lld",&x[i],&y[i]);

            key[0]=x[i];
            key[1]=y[i];

            for(j=i-1;j>=0;j--)
            {
                if(x[j]<=key[0])
                    break;

                else
                {
                    x[j+1]=x[j];
                    y[j+1]=y[j];
                }
            }

            x[j+1]=key[0];
            y[j+1]=key[1];

        }

        test=1;

        
        for(i=0;i<n;i++)
        {
            if(S>x[i])
            {
                S+=y[i];
            }
            else
            {
                test=0;
                break;
            }
        }

        if(test==1)
            printf("YES\n");
        else
            printf("NO\n");

    }

    return 0;

}


