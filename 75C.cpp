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
#define MOD 1000000007
#define EPS 1e-9

long long int findGcd(long long int a , long long int b)
{
    long long int c;

    if(a>b)
    {
        c=a;
        a=b;
        b=c;
    }

    while(1)
    {
        if(b==0)
            return a;
        c=b;
        b=a%b;
        a=c;
    }
}

int main ()
{
    long long int a,b,gcd,n,low,high;
    long long int i,j;

    scanf("%lld%lld",&a,&b);

    gcd=findGcd(a,b);

    vector <long long int> factors;

    for(i=1;i<=gcd;i++)
    {
        if(gcd%i==0)
        {
            j=gcd/i;

            if(i>j)
                break;
            else if(i==j)
            {
                factors.push_back(i);
            }
            else
            {
                factors.push_back(i);
                factors.push_back(j);
            }
        }
    }

    //for(i=1;i<10;i+=2)
      //  factors.push_back(i);

    sort(factors.begin(),factors.end());

    //for(i=0;i<factors.size();i++)
        //DEBUG(factors[i]);

    scanf("%lld",&n);

    while(n--)
    {
        scanf("%lld%lld",&low,&high);

        i=upper_bound(factors.begin(),factors.end(),high) - factors.begin() -1 ;
  //      cout<<'\t'; DEBUG(i);
//DEBUG(factors[i])
        if(low<=factors[i])
            printf("%lld\n",factors[i]);
        else
            printf("-1\n");
    }




    return 0;

}


