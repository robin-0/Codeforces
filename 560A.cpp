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
    int n,num,test;

    while(scanf("%d",&n)!=EOF)
    {
        test=0;
        while(n--)
        {
            scanf("%d",&num);
            if(num==1)
                test=1;
        }
        if(test==1)
            printf("-1\n");
        else
            printf("1\n");
    }

    return 0;

}
