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
#define MAX 200005


int main()
{
    int h,w,i,j,r1,c1,r2,c2,q;
    long long int ans;
    char grid[550][550];
    while(scanf("%d%d",&h,&w)!=EOF)
    {
        int dp[550][550]={0,};

        for(i=0;i<h;i++)
            scanf("%s",grid[i]);

        dp[1][1]=0;
        for(j=1;j<w;j++) //1st row
        {
            dp[1][j+1]=dp[1][j];
            if(grid[0][j-1]=='.' &&grid[0][j]=='.')
                dp[1][j+1]++;
                //printf("%d\n",dp[1][j+1]);
        }

        for(i=1;i<h;i++) //1st column
        {
            dp[i+1][1]=dp[i][1];
            if(grid[i-1][0]=='.'&&grid[i][0]=='.')
                dp[i+1][1]++;
                //printf("%d\n",dp[i+1][1]);
        }

        //shobar jonno

        for(i=1;i<h;i++)
        {
            for(j=1;j<w;j++)
            {
                dp[i+1][j+1]=dp[i][j+1]+dp[i+1][j]-dp[i][j];

                if(grid[i-1][j]=='.' && grid[i][j]=='.')
                    dp[i+1][j+1]++;

                if(grid[i][j-1]=='.' && grid[i][j]=='.')
                    dp[i+1][j+1]++;
            }
        }

        /*for(i=0;i<=h;i++)
        {
            for(j=0;j<=w;j++)
                printf("%d ",dp[i][j]);
            printf("\n");
        }*/

        scanf("%d",&q);
        while(q--)
        {
            scanf("%d%d%d%d",&r1,&c1,&r2,&c2);

            ans=dp[r2][c2]-dp[r1-1][c2]-dp[r2][c1-1]+dp[r1-1][c1-1];

            if(r1>1)
            {
                for(i=c1-1;i<c2;i++)
                {
                    if(grid[r1-2][i]=='.'&&grid[r1-1][i]=='.')
                        ans--;
                }

            }

            if(c1>1)
            {
                for(i=r1-1;i<r2;i++)
                {
                    if(grid[i][c1-2]=='.'&&grid[i][c1-1]=='.')
                        ans--;
                }

            }

            printf("%lld\n",ans);
        }
    }



    return 0;

}