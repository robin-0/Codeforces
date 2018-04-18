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
    int n,c,honey[1005],profit,max,i;

    while(scanf("%d%d",&n,&c)!=EOF)
    {
        max=0;

        for(i=0;i<n;i++)
            scanf("%d",&honey[i]);

        for(i=0;i<n-1;i++)
        {
            profit=honey[i]-honey[i+1]-c;
            if(max<profit)
                max=profit;
        }

        printf("%d\n",max);

    }

    return 0;

}



