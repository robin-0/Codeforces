/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,z,o;
    char c;

    while(scanf("%d",&n)!=EOF)
    {
        getchar();
        z=0;
        o=0;
        while(n--)
        {
            c=getchar();
            if(c==48)
                z++;
            else if(c==49)
                o++;
        }
        printf("%d\n",abs(o-z));
    }

    return 0;
}

