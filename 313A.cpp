/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int a,b,c;

    while(scanf("%d",&a)!=EOF)
    {
        if(a>=0)
            printf("%d\n",a);
        else
        {
            a=-a;
            b=(a%100);
            c=b%10;
            b/=10;
            a/=100;
            b+=a*10;
            c+=a*10;
            b=-b;
            c=-c;

            printf("%d\n", b>=c ?  b :  c    );

        }
    }

    return 0;
}

