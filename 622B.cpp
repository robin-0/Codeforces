/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9


int main ()
{
    int h,m,add,tot;

    while(scanf("%d:%d",&h,&m)!=EOF)
    {
        tot=h*60+m;

        scanf("%d",&add);
        tot+=add;
        tot%=1440;

        h=tot/60;
        m=tot%60;

        if(h<10)
            printf("0");
        printf("%d:",h);

        if(m<10)
            printf("0");
        printf("%d\n",m);
    }



    return 0;

}