/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int n,k,person,cnt,i;

    while(scanf("%d%d",&n,&k)!=EOF)
    {
        cnt=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&person);

            if(person+k<=5)
                cnt++;
        }

        printf("%d\n",cnt/3);
    }


    return 0;

}
