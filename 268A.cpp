/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int home[500],away[500],n,i,j,cnt;

    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d%d",&home[i],&away[i]);

        cnt=0;

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                    continue;
                else if(home[i]==away[j])
                    cnt++;
            }
        }
        printf("%d\n",cnt);
    }

    return 0;
}


