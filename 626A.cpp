/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9



int main ()
{
    int n,i,j,k,len,x,y;
    long long int cnt;
    char inp[MAX];

    while(scanf("%d",&n)!=EOF)
    {
        scanf("%s",inp);

        cnt=0;

        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                x=0;
                y=0;

                for(k=i;k<=j;k++)
                {
                    if(inp[k]=='U')
                        y++;
                    else if (inp[k]=='D')
                        y--;
                    else if(inp[k]=='L')
                        x--;
                    else if(inp[k]=='R')
                        x++;
                }

                if(x==0&&y==0)
                    cnt++;
            }
        }

        printf("%lld\n",cnt);
    }

    return 0;

}