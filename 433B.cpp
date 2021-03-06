/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void mergesort(int p,int r);
void merge (int p ,int q ,int r);
long long int L[100005],R[100005],array[100005],sum[100005];
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
int main()
{
    int n,m,type,l,r,i;

    while(scanf("%d",&n)!=EOF)
    {
        scanf("%lld",&array[0]);
        sum[0]=array[0];
        for(i=1;i<n;i++)
        {
            scanf("%lld",&array[i]);
            sum[i]=sum[i-1]+array[i];
        }

        mergesort(0,n-1);




        R[0]=array[0];
        for(i=1;i<n;i++)
        {
            R[i]=R[i-1]+array[i];
        }


        scanf("%d",&m);

        while(m--)
        {
            scanf("%d%d%d",&type,&l,&r);

            if(type==1)
            {
                if(l>1) printf("%lld\n",sum[r-1]-sum[l-2]);
                else printf("%lld\n",sum[r-1]);
            }

            else
            {
                if(l>1) printf("%lld\n",R[r-1]-R[l-2]);
                else printf("%lld\n",R[r-1]);
            }

        }
    }



    return 0;

}
