/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
   int n,level,i,p,q,P[1000]={0,},Q[1000]={0,},cnt=0;

   scanf("%d",&n);

   scanf("%d",&p);
   for(i=0;i<p;i++)
   {
       scanf("%d",&level);
       P[level]=1;
   }


   scanf("%d",&q);
   for(i=0;i<q;i++)
   {
       scanf("%d",&level);
       Q[level]=1;
   }

   for(i=1;i<=n;i++)
   {
       if(P[i]|Q[i]==1)
        cnt++;
   }

   if(cnt==n)
    printf("I become the guy.\n");
   else
    printf("Oh, my keyboard!\n");


    return 0;
}

