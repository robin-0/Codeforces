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

struct boy
{
    char name[20];
    int region;
    int mark;
}boys[MAX];

bool isFSmall(struct boy a, struct boy b);

bool isFSmall(struct boy a, struct boy b)
{
    if(a.region<b.region)
    {
        return true;
    }

    else if (a.region>b.region)
    {
        return false;
    }

    else
    {
        if(a.mark>b.mark)
    {
        return true;
    }

    else
    {
        return false;
    }
    }
}

int main()
{
    int n,m,j,i;

    getInt(n)
    getInt(m)

    for(i=0;i<n;i++)
    {
        scanf("%s",boys[i].name);
        getInt(boys[i].region);
        getInt(boys[i].mark);
    }

    sort(boys,boys+n,isFSmall);


    j=1;

    for(i=0;i<n;i++)
    {
        if(boys[i].region==j)
        {
            if( ((i+2)<n) && (boys[i+2].region==j) &&  (boys[i+2].mark==boys[i+1].mark))
            {
                printf("?\n");
            }

            else
            {
                printf("%s %s\n",boys[i].name,boys[i+1].name);
            }

            j++;

            if(j>m)
                break;
        }
    }

    return 0;
}