/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005



int main()
{
    long long int sum,a,b,cnt;
    long long int ans[MAX][2],i,r,c,n,j=0;

    scanf("%lld",&sum);

    for(r=1;;r++)
    {
        n=r-1;
        a=sum+((n*(n+1)*r)/2)-((n*(n+1)*(2*n+1))/6);
        b=r*(n+1) - ((n*(n+1))/2);

        //if(a<0||b<0)
          //  continue;

        if((a/b)<r)
            break;


        if(a%b==0)
        {
            c=a/b;
            ans[j][0]=r;
            ans[j][1]=c;
            j++;
        }

    }

    cnt=2*j;

    j--;

    if(ans[j][0]==ans[j][1])
        cnt--;
    printf("%lld\n",cnt);

    for(i=0;i<=j;i++)
    {
        printf("%lld %lld\n",ans[i][0],ans[i][1]);
    }
    i=j;
    if(ans[j][0]==ans[j][1])
        i--;
    for(;i>=0;i--)
    {
        printf("%lld %lld\n",ans[i][1],ans[i][0]);
    }


    return 0;

}
