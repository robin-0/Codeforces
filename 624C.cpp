/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9


int main ()
{
    int n,m,i,j,n_;
    char graph[550][550]={0,};
    int set[550]={0,};
    int cnt[550]={0,};
    int setA[550]={0,},setALen=0,setB[550]={0,},setBLen=0;
    int u,v;
    int test=1;

    scanf("%d%d",&n,&m);
    n_=n-1;

    for(i=0;i<n;i++)
        graph[i][i]=2;

    while(m--)
    {
        scanf("%d%d",&u,&v);
        u--;
        v--;
        graph[u][v]=1;
        graph[v][u]=1;
        //printf("%d \n",graph[u][v]);
    }

    //for(i=0;i<n;i++)
    //{
        //for(j=0;j<n;j++)
          //  printf("%d ",graph[i][j]);
        //printf("\n");
    //}


    for(i=0;i<n;i++)
    {
        cnt[i]=0;

        for(j=0;j<n;j++)
        {
            if(graph[i][j]==1)
                cnt[i]++;
        }

        if(cnt[i]==n_)
            set[i]=2;
    }

    for(i=0;i<n;i++)
    {
        if(cnt[i]<n_)
        {
            set[i]=1;
            for(j=0;j<n;j++)
            {
                if(graph[i][j]==1 && set[j]!=2)
                {
                    setA[setALen++]=j;
                    set[j]=1;
                }

                else if(graph[i][j]==0)
                {
                    setB[setBLen++]=j;
                    set[j]=3;
                }
            }

            break;
        }
    }

    for(i=0;i<setALen;i++)
    {
        for(j=0;j<setALen;j++)
        {
            if(i==j)
                continue;

            if(graph[setA[i]][setA[j]] !=1 )
            {
                test=0;
                break;
            }
        }
    }

    for(i=0;i<setBLen;i++)
    {
        for(j=0;j<setBLen;j++)
        {
            if(i==j)
                continue;

            if(graph[setB[i]][setB[j]] != 1)
            {
                test=0;
                break;
            }

            if(test==0)
                break;
        }
    }

    for(i=0;i<setALen;i++)
    {
        for(j=0;j<setBLen;j++)
        {
            if(graph[setA[i]][setB[j]]==1)
            {
                test=0;
                break;
            }

            if(test==0)
                break;
        }
    }

    for(i=0;i<setBLen;i++)
    {
        for(j=0;j<setALen;j++)
        {

            if(graph[setB[i]][setA[j]]==1)
            {
                test=0;
                break;
            }

            if(test==0)
                break;
        }
    }

    if(test==1)
    {
        printf("Yes\n");

        for(i=0;i<n;i++)
        {
            printf("%c",set[i]-1+'a');
        }

        printf("\n");
    }

    else
    {
        printf("No\n");
    }



    return 0;

}