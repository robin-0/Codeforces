/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    long long int n,k;

    while(scanf("%I64d%I64d",&n,&k)!=EOF)
    {
        if(n%2==0)
        {
            if(k<=(n/2))
                printf("%I64d\n",2*k-1);
            else
                {
                    k-=(n/2);
                    printf("%I64d\n",2*(k));
                }
        }

        else
        {
            if(k<=((n/2)+1))
                printf("%I64d\n",2*k-1);
            else
                {
                    k-=(n/2)+1;
                    printf("%I64d\n",2*(k));
                }
        }

    }

    return 0;
}

