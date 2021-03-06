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



void mergesort(int p,int r);
void merge (int p ,int q ,int r);
long long int L[MAX],R[MAX],array[MAX];
void mergesort(int p,int r)
{
    if(p<r)
    {
        int q=(p+r)/2;
        mergesort(p,q);
        mergesort(q+1,r);
        merge(p,q,r);
    }

}

void merge (int p ,int q ,int r)
{

    int n1=q-p+1;
    int n2=r-q;
    int i,j,k;

    for(i=0;i<n1;i++)
    {
        L[i]=array[i+p];
    }


    for(j=0;j<n2;j++)
    {
        R[j]=array[j+q+1];
    }

    i=0;
    j=0;

    for(k=p;k<=r;k++)
    {
       if(i<n1&&j<n2)
       {
           if(L[i]<=R[j])
           {
               array[k]=L[i];
               i++;
           }
           else
           {
               array[k]=R[j];
               j++;
           }

       }
       else if(i<n1)
       {

               array[k]=L[i];
               i++;

       }
       else
       {
               array[k]=R[j];
               j++;
       }
    }
}

int main ()
{
    int N,i;
    long long int ans;

    while(scanf("%d",&N)!=EOF)
    {
        for(i=0;i<N;i++)
            scanf("%lld",&array[i]);

        mergesort(0,N-1);

        ans=0;

        for(i=N-2;i>=0;i--)
        {
            if(array[i]>array[i+1])
            {
                array[i]=array[i+1];
                i++;
            }
            else if(array[i]==array[i+1] && array[i]!=0)
            {
                array[i]--;
                i++;
            }
        }

        for(i=0;i<N;i++)
            ans+=array[i];

        //for(i=0;i<N;i++)
          //  printf("%lld ",array[i]);
    //printf("\n");
        printf("%lld\n",ans);
    }

    return 0;

}