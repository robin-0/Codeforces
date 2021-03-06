/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005



void mergesort(int p,int r);
void merge (int p ,int q ,int r);
long long int L[MAX][2],R[MAX][2],array[MAX][2];
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
        L[i][0]=array[i+p][0];
        L[i][1]=array[i+p][1];
    }


    for(j=0;j<n2;j++)
    {
        R[j][0]=array[j+q+1][0];
        R[j][1]=array[j+q+1][1];
    }

    i=0;
    j=0;

    for(k=p;k<=r;k++)
    {
       if(i<n1&&j<n2)
       {
           if(L[i][0]<=R[j][0])
           {
               array[k][0]=L[i][0];
               array[k][1]=L[i][1];
               i++;
           }
           else
           {
               array[k][0]=R[j][0];
               array[k][1]=R[j][1];
               j++;
           }

       }
       else if(i<n1)
       {

               array[k][0]=L[i][0];
               array[k][1]=L[i][1];
               i++;

       }
       else
       {
               array[k][0]=R[j][0];
               array[k][1]=R[j][1];
               j++;
       }
    }
}



int main()
{
    int n,i;

    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d%d",&array[i][0],&array[i][1]);


    mergesort(0,n-1);

    int test=1;

    for(i=0;i<n-1;i++)
    {
        if(array[i+1][1]<array[i][1])
        {
            test=0;
            break;
        }
    }

    if(test)
        printf("Poor Alex\n" );
    else
        printf("Happy Alex\n");

    }
    return 0;
}
