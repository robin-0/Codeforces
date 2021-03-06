/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005

long long int gcd(long long int a , long long int b);

int main()
{
    long long int l,r,a,b,c,test=0;

    scanf("%lld%lld",&l,&r);

    for(a=l;a<=r;a++)
    {
        for(b=a+1;b<=r;b++)
        {
            for(c=b+1;c<=r;c++)
            {
                //printf("%lld %lld %lld\n",a,b,c);
                //printf("%lld %lld %lld\n",gcd(b,a),gcd(c,b),gcd(c,a));
                if((gcd(b,a)==1)&&(gcd(c,b)==1)&&(gcd(c,a)!=1))
                {
                    test=1;
                    printf("%lld %lld %lld\n",a,b,c);
                    break;
                }
            }
            if(test==1)
                break;
        }
        if(test==1)
            break;
    }

    if(test==0)
        printf("-1\n");


    return 0;
}

long long int gcd(long long int a , long long int b)
{
    long long int c;

    while(1)
    {
        if(b==0)
            return a;

        c=b;
        b=a%b;
        a=c;

    }
}
