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
    int sieve[1005]={0,},prime[1005],primo=0;
    int i,j,n,k,cnt,temp;

    sieve[0]=1;
    sieve[1]=1;
    for(i=2;i<1004;i++)
    {
        if(sieve[i]==0)
        {
            prime[primo++]=i;
            for(j=i*i;j<1004;j+=i)
                sieve[j]=1;
        }
    }

    while(scanf("%d",&n)!=EOF)
    {
        cnt=0;
        j=0;

        for(i=0;i<primo;i++)
        {
            if(prime[i]>n)
                break;

            temp=prime[i];
            while(1)
            {
                if(temp<=n)
                {
                    cnt++;
                    sieve[j++]=temp;
                }
                else
                    break;

                temp*=prime[i];

            }

        }
        printf("%d\n",cnt);
        if(cnt>0)
        {
            printf("%d",sieve[0]);

            for(i=1;i<j;i++)
                printf(" %d",sieve[i]);

            printf("\n");
        }
    }


    return 0;
}