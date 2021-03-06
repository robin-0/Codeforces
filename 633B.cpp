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

long long int counter(long long int num);
long long int binSear(long long int lo , long long int hi , long long int val);

long long int counter(long long int num)
{
    long long int cnt=0;
    long long int temp=5;
    int i;

    for(;;)
    {
        if(temp>num)
            break;
        cnt+=num/temp;
        temp*=5;
    }

    return cnt;

}

long long int binSear(long long int lo , long long int hi , long long int val)
{
    long long int mid=(lo+hi+1)/2;
    long long int cnt;
    while(lo<hi)
    {
        cnt=counter(mid);

        if(cnt<val)
        {
            lo=mid;
        }

        else
        {
            hi=mid-1;
        }

        mid=(lo+hi+1)/2;
    }

    return mid;
}

int main()
{
    long long int m,k,i,j;

    while(scanf("%lld",&m)!=EOF)
    {
        i=binSear(1,1e17,m-1);
        j=binSear(1,1e17,m+2);

   vector <long long int> vv;

   for(;i<=j;i++)
   {
       if(counter(i)==m)
        vv.push_back(i);
   }
   int len=vv.size();

   printf("%d\n",len);

   if(len>0)
   {
       printf("%lld",vv[0]);

   int k;

   for(k=1;k<len;k++)
    printf(" %lld",vv[k]);

   printf("\n");
   }

    }


    return 0;

}