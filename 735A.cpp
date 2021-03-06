﻿/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
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
#include <map>
#include <list>
#include <stack>
#include <set>
#include <deque>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("myInput.in","r",stdin);
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
#define ppb pop_back
#define setBit(a,n) a|=1<<n;
#define resetBit(a,n) a&=~(1<<n);
#define checkBit(a,n) ((a&(1<<n))!=0)
#define toggleBit(a,n) a^=1<<n;

#define INF 1000000000

long long int factorArray[5005];
long long int divisorArray[5005];
long long int cumSum[5005];
bool sieve[5005]={0,};

int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    char inp[1000];
    int N,k;
    int i;
    int found,gp;

    getInt(N)
    getInt(k)

    scanf("%s",inp);

    for(i=0;i<N;i++)
    {
        if(inp[i]=='G')
        {
            gp=i;
        }
    }

    found=0;

    for(i=gp;i<N;i+=k)
    {
        if(inp[i]=='#')
        {
            break;
        }

        if(inp[i]=='T')
        {
            found=1;
        }
    }

    for(i=gp;i>=0;i-=k)
    {
        if(inp[i]=='#')
        {
            break;
        }

        if(inp[i]=='T')
        {
            found=1;
        }
    }

    printf("%s\n",found == 1 ? "YES" : "NO" );

    return 0;
}