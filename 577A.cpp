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
    int x,factor,n,i,j;
    int rt;

    while(scanf("%d%d",&n,&x)!=EOF)
    {
        factor=0;
        rt=sqrt(x)+1;


        for(i=1;i<rt;i++)
        {

            if(i>n)
                break;

            j=x/i;

            if(i*j==x)
            {
                if(i<=n&&j<=n)
                    {
                        factor+=2;
                        if(i==j)
                            factor--;
                    }
            }
        }

        printf("%d\n",factor);
    }

    return 0;
}