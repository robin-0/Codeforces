/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005
 

int main()
{
    int n,m,i,a,cnt;

    while(scanf("%d%d",&n,&m)!=EOF)
    {
        int sieve[MAX]={0,};
        cnt=0;
        while(n--)
        {
            scanf("%d",&i);
            while(i--)
            {
                scanf("%d",&a);

                if(sieve[a]==0)
                {
                    sieve[a]=1;
                    cnt++;
                }    
            }
        }

        if(cnt==m)
            printf("YES\n");
        else
            printf("NO\n");
    }


    return 0;

}
