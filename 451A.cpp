/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int n,m;

    while(scanf("%d%d",&n,&m)!=EOF)
    {
        n = (n <= m)  ?   n   :   m;

        if(n%2==0)
            printf("Malvika\n");
        else
            printf("Akshat\n");
    }

    return 0;
}


