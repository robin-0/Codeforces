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


int main()
{
    // Bismillahir Rahmanir Rahim
    // Rabbi Zidni Ilma

    long long int a,b,c,n;
    long long int k,four;
    long long int ans;

    getLong(n)
    getLong(a)
    getLong(b)
    getLong(c)


    k=n%4;

    if(k==0)
    {
        ans=0;
    }

    if(k==1)
    {
        ans=SMALLER(SMALLER(3*a,c),SMALLER(b+a,2*b+c));
    }

    if(k==2)
    {
        ans=SMALLER(SMALLER(2*a,b),SMALLER(c+a+b,2*c));
    }

    if(k==3)
    {
        ans=SMALLER(SMALLER(a,c+b),3*c);
    }

    printf("%lld\n",ans);

    return 0;
}