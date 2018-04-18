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
    long long int n,i,m;

    while(scanf("%lld",&n)!=EOF)
    {
        n--;
        i=(sqrt(1+8*n)-1)/2;

        m=(i*(i+1))/2;

        printf("%lld\n",n-m+1);

    }

    return 0;

}