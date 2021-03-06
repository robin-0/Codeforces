/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9

int main ()
{
    int n,p,i;
    int L[MAX],R[MAX],Primo,Range;
    double expected,Prime_Prob[MAX];
    int last,first;

    scanf("%d%d",&n,&p);

    for(i=0;i<n;i++)
    {
        scanf("%d%d",&L[i],&R[i]);
        first=L[i]/p;
        if(L[i]%p!=0)
            first++;

        last=R[i]/p;

        if(last>=first)
        {
            Primo=last-first+1;
        }
        else
            Primo=0;

        Range=R[i]-L[i]+1;
        Prime_Prob[i]=((Primo*1.0)/Range);

        //printf("%d %d\n",Primo,Range);
        //printf("%lf\n",Prime_Prob[i]);

    }

    expected=0.0;

    for(i=1;i<n;i++)
    {

        expected+= Prime_Prob[i] + Prime_Prob[i-1] - Prime_Prob[i]*Prime_Prob[i-1];
    }

    expected+= Prime_Prob[0] + Prime_Prob[n-1] - Prime_Prob[0]*Prime_Prob[n-1];

    expected*=2000.0;

    printf("%.7lf\n",expected);



    return 0;

}
