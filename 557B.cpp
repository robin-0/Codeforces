/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void mergesort(int p,int r);
void merge (int p ,int q ,int r);
long long int L[200005],R[200005],array[200005];
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
    int n,W,i,j;
    double x,y;

    while(scanf("%d%d",&n,&W)!=EOF)
    {
        for(i=0;i<2*n;i++)
            scanf("%d",&array[i]);

        mergesort(0,2*n-1);

        if(2*array[0]>array[n])
            x=((double)array[n])/2.0;

        else
            x=(double) array[0];

        y=((double)W)/(3.0*n);

        if((x-y)>1e-11)
            x=y;

        printf("%.7lf\n",x*3*n);


    }

    return 0;
}