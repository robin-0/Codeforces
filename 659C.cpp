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
    int array[MAX],n,m,k,i,j;
    vector <int> kinsi;

    //while(1)
    {
        getInt(n)
        getInt(m)

        for(i=0;i<n;i++)
            getInt(array[i]);

        sort(array,array+n);

        k=0;

        j=0;

        for(i=1;;i++)
        {
            if(j<n && array[j]==i)
            {
                j++;
            }

            else
            {
                if(m>=i)
                {
                    m-=i;
                    k++;
                kinsi.pb(i);
                }

                else
                    goto shesh;
            }




        }
shesh :
        printf("%d\n",k);

        if(k>0)
            {printf("%d",kinsi[0]);
        for(i=1;i<k;i++)
            printf(" %d",kinsi[i]);
        printf("\n");}
    }

    return 0;
}