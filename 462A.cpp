/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);

int main()
{
    int i,j,n,test;
    char grid[200][200];

    while(scanf("%d",&n)!=EOF)
    {
        test=1;
        int mat[200][200]={0,};
        gets(grid[0]);
        for(i=0;i<n;i++)
            gets(grid[i]);

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i>0)
                {
                    if(grid[i-1][j]=='o')
                        mat[i][j]++;
                }
                if(i<n-1)
                {
                    if(grid[i+1][j]=='o')
                        mat[i][j]++;
                }
                if(j>0)
                {
                    if(grid[i][j-1]=='o')
                        mat[i][j]++;
                }
                if(j<n-1)
                {
                    if(grid[i][j+1]=='o')
                        mat[i][j]++;
                }

                if(mat[i][j]&1!=0)
                {
                    test=0;
                    break;
                }
            }
        }

        if(test)
            printf("YES\n");
        else
            printf("NO\n");


    }
    return 0;

}



