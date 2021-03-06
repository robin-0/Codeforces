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


int main()
{
    long long int n,i,p[MAX],a,b,c,d,e,points=0,a1=0,b1=0,c1=0,d1=0,e1=0;

    getLong(n)

    for(i=0;i<n;i++)
        getLong(p[i])

    getLong(a)
    getLong(b)
    getLong(c)
    getLong(d)
    getLong(e)

    for(i=0;i<n;i++)
    {
        points+=p[i];

        while(points>=a)
        {
            if(points>=e)
            {
                e1+=points/e;
                points=points%e;

                continue;
            }

            else if(points>=d)
            {
                d1+=points/d;
                points=points%d;

                continue;
            }

            else if(points>=c)
            {
                c1+=points/c;
                points=points%c;

                continue;
            }

            else if(points>=b)
            {
                b1+=points/b;
                points=points%b;

                continue;
            }

            else if(points>=a)
            {
                a1+=points/a;
                points=points%a;

                continue;
            }
        }
    }

    printf("%lld %lld %lld %lld %lld\n",a1,b1,c1,d1,e1);
    printf("%lld\n",points);



    return 0;
}
