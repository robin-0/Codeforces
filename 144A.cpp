/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int n,h[1000],max,maxp,min,minp,tot,i;

    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d",&h[i]);

        max=h[0];
        maxp=0;

        for(i=1;i<n;i++)
        {
            if(h[i]>max)
            {
                max=h[i];
                maxp=i;
            }
        }

        min=h[n-1];
        minp=n-1;

        for(i=n-2;i>=0;i--)
        {
            if(h[i]<min)
            {
                min=h[i];
                minp=i;
            }
        }

        tot=maxp+(n-1-minp);

        if(minp<maxp)
            tot--;

        printf("%d\n",tot);
    }

    return 0;
}


