/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005
#define MOD 1000000007

int main ()
{
    int N,M,i,j,element,min,max_min;

    while(scanf("%d%d",&N,&M)!=EOF)
    {
        scanf("%d",&element);

        min=element;

        for(j=1; j<M; j++)
        {
            scanf("%d",&element);
            if(element<min)
                min=element;
        }


        max_min=min;

        //printf("%d\n",max_min);
        //printf("%d\n",min);

        for(i=1; i<N; i++)
        {
            scanf("%d",&element);

            min=element;

            for(j=1; j<M; j++)
            {
                scanf("%d",&element);
                if(element<min)
                    min=element;
            }

            if(min>max_min)
                max_min=min;

            //printf("%d\n",max_min);
            //printf("%d\n",min);
        }


        printf("%d\n",max_min);

    }

    return 0;

}

