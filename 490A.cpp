/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);

int main()
{
    int a[5005],aa=0,b[5005],bb=0,c[5005],cc=0,i,n,min;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&min);

        if(min==1)
            a[aa++]=i;
        else if(min==2)
            b[bb++]=i;
        else if(min==3)
            c[cc++]=i;

    }

    min=aa;
    if(bb<min)
        min=bb;
    if(cc<min)
        min=cc;

    printf("%d\n",min);

    for(i=0;i<min;i++)
        printf("%d %d %d\n",a[i],b[i],c[i]);

    return 0;

}


