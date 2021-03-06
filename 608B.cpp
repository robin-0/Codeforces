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
#define MAX 200005


int main()
{
    int lena,lenb,i;
    long long int ans;
    char a[MAX],b[MAX];

    while(scanf("%s%s",a,b)!=EOF)
    {
        int zeros[MAX]={0,},ones[MAX]={0,};

        lena=strlen(a);
        lenb=strlen(b);

        if(b[0]=='0')
            zeros[0]=1;
        else
            ones[0]=1;

        for(i=1;i<lenb;i++)
        {
            if(b[i]=='0')
            {
                zeros[i]=zeros[i-1]+1;
                ones[i]=ones[i-1];
            }
            else
            {
                ones[i]=ones[i-1]+1;
                zeros[i]=zeros[i-1];
            }
        }

        //for(i=0;i<lenb;i++)
          //  printf("%d\t%d\n",zeros[i],ones[i]);

        ans=0;

        if(a[0]=='0')
            {
                ans+=ones[lenb-lena];
            }
            else
            {
                ans+=zeros[lenb-lena];
            }

        for(i=1;i<lena;i++)
        {
            if(a[i]=='0')
            {
                ans+=ones[lenb-lena+i]-ones[i-1];
            }
            else
            {
                ans+=zeros[lenb-lena+i]-zeros[i-1];
            }
        }

        printf("%lld\n",ans);

    }


    return 0;

}

