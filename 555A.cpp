/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,k,array[200005],m,subidha,time,i,j;

    while(scanf("%d%d",&n,&k)!=EOF)
    {
        time=0;
        subidha=0;
        for(i=0;i<k;i++)
        {
            scanf("%d",&m);

            for(j=0;j<m;j++)
                scanf("%d",&array[j]);

            if(array[0]==1)
            {
                for(j=1;j<m;j++)
                {
                    if(array[j]!=j+1)
                        break;
                }
                subidha=j;
                time+=m+m-subidha-subidha;


            }
            else
            {
                time+=m+m-1;
            }
        }

        printf("%d\n",time);

    }

    return 0;
}

