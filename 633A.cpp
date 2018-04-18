/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 100000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define getInt(a) scanf("%d",&a);


int main()
{
    long long int a,b,c,d,x,y;
    int test;
    while(scanf("%lld%lld%lld",&a,&b,&c)!=EOF)
    {
        test=0;

        for(x=0;;x++)
        {
            if(x*a>c)
                break;
            d=c-x*a;
//printf("%lld\t%d\n",d,test);
            if(d%b==0)
                //printf("%d %d\n",x,d);
                test=1;

            if(test==1)
                break;
        }

        for(y=0;;y++)
        {
            if(y*b>c)
                break;

            d=c-y*b;
//printf("%lld\t%d\n",d,test);
            if(d%a==0)
                                //printf("2 %d %d\n",y,d);
                test=1;
            if(test==1)
                break;
        }

        if(test==0)
            printf("No\n");
        else
            printf("Yes\n");
    }

    return 0;

}