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
#define EPS 1e-9


int main ()
{
    int N,i;
    long long int sum,minn,num,odd_no;

    while(scanf("%d",&N)!=EOF)
    {
        sum=0;
        minn=10000000009;
        odd_no=0;

        for(i=0;i<N;i++)
        {
            scanf("%lld",&num);
            if(num%2==0)
            {
                sum+=num;
            }

            else
            {
                odd_no++;
                if(num<minn)
                    minn=num;
                sum+=num;
            }
        }

        if(odd_no%2==1)
            sum-=minn;

        printf("%lld\n",sum);
    }

    return 0;

}