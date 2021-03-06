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
#define MOD 1000000007
#define EPS 1e-9

int grid[1005][1005];
int main ()
{
    int N,i,j,x,y,start;

    long long int ans=0,diag_count;

    scanf("%d",&N);

    while(N--)
    {
        scanf("%d%d",&x,&y);
        grid[x][y]=1;
    }

    for(i=1;i<=1000;i++)
    {
        x=i;
        y=1;

        if(grid[x][y]==1)
            diag_count=1;
        else
            diag_count=0;

        for(j=1;j<=1000;j++)
        {
            if((x+j>1000)||(y+j>1000))
                break;
            if(grid[x+j][y+j]==1)
                diag_count++;
        }

        ans+=(diag_count*(diag_count-1))/2;
    }

    for(i=2;i<=1000;i++)
    {
        y=i;
        x=1;

        if(grid[x][y]==1)
            diag_count=1;
        else
            diag_count=0;

        for(j=1;j<=1000;j++)
        {
            if((x+j>1000)||(y+j>1000))
                break;
            if(grid[x+j][y+j]==1)
                diag_count++;
        }

        ans+=(diag_count*(diag_count-1))/2;
    }

    for(i=1000;i>0;i--)
    {
        x=i;
        y=1;

        if(grid[x][y]==1)
            diag_count=1;
        else
            diag_count=0;

        for(j=1;j<=1000;j++)
        {
            if((x-j<1)||(y+j>1000))
                break;
            if(grid[x-j][y+j]==1)
                diag_count++;
        }

        ans+=(diag_count*(diag_count-1))/2;
    }

    for(i=2;i<=1000;i++)
    {
        y=i;
        x=1000;

        if(grid[x][y]==1)
            diag_count=1;
        else
            diag_count=0;

        for(j=1;j<=1000;j++)
        {
            if((x-j<1)||(y+j>1000))
                break;
            if(grid[x-j][y+j]==1)
                diag_count++;
        }

        ans+=(diag_count*(diag_count-1))/2;
    }

    printf("%lld\n",ans);

    return 0;

}