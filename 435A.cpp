/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int n,m,q[1000],on,bus,i;

    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d",&q[i]);

        bus=0;
        for(i=0;i<n;)
        {
            on=m-q[i];
            i++;
            while(on>=q[i])
            {
                if(i==n)
                    break;
                on-=q[i];
                i++;
            }

            bus++;
        }

        printf("%d\n",bus);

    }


    return 0;

}
