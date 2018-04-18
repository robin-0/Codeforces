/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int i);
int check(int i);

char inp[200];
int k,n,fixed;

int main()
{
    int i,j;

    while(scanf("%s%d",inp,&k)!=EOF)
    {
        n=strlen(inp);


        for(i=0;i<n;i++)
        {
            fixed=i;

            if(k==0)
                break;
            j=check(i);
            //printf("%d\n",j);

            if(j!=i)
            {
                swap(j);
             //   printf("%s\t%d\n",inp,fixed);
                k-=j-i;
            }
        }

        printf("%s\n",inp);
    }


    return 0;

}

int check(int i)
{
    int max=inp[i];
    int j;
    int ans=i;

    for(j=1;j<=k;j++)
    {
        if(j+i>=n)
            break;

        if(max<inp[j+i])
        {
            max=inp[i+j];
            ans=i+j;
        }
    }
    return ans;
}

void swap(int i)
{
    int j,p;

    //if(i<=k)
      //  j=fixed;

    //else
        //j=i-k;


    for(p=i;p>fixed;p--)
    {
        inp[p]=inp[p]^inp[p-1];
        inp[p-1]=inp[p]^inp[p-1];
        inp[p]=inp[p]^inp[p-1];
    }
}
