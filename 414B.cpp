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
#include <string>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back

int dp[2005][2005];
int n,k;

int calc(int number , int length);

int calc(int number , int length)
{
    if(length==k)
    {
        dp[number][length]=1;
        return 1;
    }

    if(dp[number][length]!=-1)
        return dp[number][length];

    int i;
    long long int val=0;

    for(i=1;;i++)
    {
        if(number*i>n)
            break;
        else
            val = (val + calc(number*i,length+1) )%MOD;
    }

    dp[number][length]=val;

    return val;
}


int main()
{
    int i,j;

    getInt(n)
    getInt(k)


    for(i=0;i<=n;i++)
    {
        for(j=0;j<=k;j++)
        {
            dp[i][j]=-1;
        }
    }

    printf("%d\n",calc(1,0));

    /*for(i=0;i<=n;i++)
    {
        for(j=0;j<=k;j++)
        {
            printf("%d ",dp[i][j]);
        }
        printf("\n");
    }*/


    return 0;
}


