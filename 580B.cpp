/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9


struct fri
{
    int money;
    int factor;
} friendd[MAX];

bool isFirstSmaller(struct fri A, struct fri B);


bool isFirstSmaller(struct fri A, struct fri B)
{
    if(A.money<B.money)
        return true;
    else
        return false;
}

int main ()
{
    int n,i,head,d,diff;
    long long int max,point;

    while(scanf("%d%d",&n,&d)!=EOF)
    {
        max=0;

        for(i=0; i<n; i++)
            scanf("%d%d",&friendd[i].money,&friendd[i].factor);

        sort(friendd,friendd+n,isFirstSmaller);

        head=0;
        diff=0;
        max=friendd[head].factor;
        point =max;

        for(i=1; i<n; i++)
        {
            if((friendd[i].money-friendd[head].money)>=d)
            {
                point-=friendd[head].factor;
                head++;
                i--;
            }

            else
            {
                point+=friendd[i].factor;

                if(point>max)
                    max=point;
            }
        }

        printf("%lld\n",max);
    }

    return 0;

}