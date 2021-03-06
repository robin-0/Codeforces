/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005

int g[7][7];
int check(int a, int b ,int c, int d ,int e);
long long int calc(int a, int b ,int c, int d ,int e);

int main()
{
    int i,j,k,l,m;
    long long int point,max=0;

    for(i=1;i<6;i++)
        for(j=1;j<6;j++)
            scanf("%d",&g[i][j]);

    for(i=1;i<6;i++)
    {
        for(j=1;j<6;j++)
        {
            for(k=1;k<6;k++)
            {
                for(l=1;l<6;l++)
                {
                    for(m=1;m<6;m++)
                    {
                        if(check(i,j,k,l,m)==1)
                        {
                            point=calc(i,j,k,l,m);
                            if(point>max)
                                max=point;
                        }
                    }
                }
            }
        }
    }

    printf("%lld\n",max);


    return 0;
}


int check(int a, int b ,int c, int d ,int e)
{
    int arr[5],i,j;
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==j)
                continue;

            if(arr[i]==arr[j])
                return 0;
        }
    }

    return 1;
}


long long int calc(int a, int b ,int c, int d ,int e)
{
    return (g[a][b]+g[b][a]+g[c][d]+g[d][c])+(g[c][b]+g[b][c]+g[e][d]+g[d][e])+(g[c][d]+g[d][c])+(g[e][d]+g[d][e]);
}
