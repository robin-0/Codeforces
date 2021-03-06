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

struct point
{
    int x;
    int y;

}P[MAX];

int isCCW(struct point a , struct point b , struct point c);

int isCCW(struct point a , struct point b , struct point c)
{
    long long int area;

    area= a.x*b.y + b.x*c.y + c.x*a.y - a.y*b.x - b.y*c.x - c.y*a.x ;

    if(area>0)
        return 1;
    else return 0;
}



int main()
{
    int ans=0,n,n_,i,a,b;

    getInt(n)

    for(i=0;i<=n;i++)
    {
        getInt(P[i].x)
        getInt(P[i].y)
    }

    n_=n-1;

    for(i=1;i<n_;i++)
    {
        if(isCCW(P[i-1],P[i],P[i+1])==1)
            ans++;
    }

    if(isCCW(P[n-1],P[0],P[1])==1)
            ans++;

    if(isCCW(P[n-2],P[n-1],P[0])==1)
            ans++;

        printf("%d\n",ans);

    return 0;
}
