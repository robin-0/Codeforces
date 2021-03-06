/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005

int gcd(int a , int b )
{
    int c;

    if(b>a)
    {
        a=a^b;
        b=a^b;
        a=a^b;
    }

    while(1)
    {
        if(b==0)
            return a;

        c=b;
        b=a%b;
        a=c;
    }
}


int main()
{
    int n,num,i,a;

    scanf("%d",&n);
    scanf("%d",&a);

    for(i=1;i<n;i++)
    {
        scanf("%d",&num);
        a=gcd(a,num);
    }

    printf("%d\n",a*n);

    return 0;
}

