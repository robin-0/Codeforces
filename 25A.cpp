/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);

int main()
{
    int n,e,o,even,odd,i;

    while(scanf("%d",&n)!=EOF)
    {
        int num;
        e=0;
        o=0;
        even=0;
        odd=0;

        for(i=1;i<=n;i++)
            {
                scanf("%d",&num);
                if(num%2==0)
                {
                    e++;
                    if(even==0)
                        even=i;
                }
                else
                {
                    o++;
                    if(odd==0)
                        odd=i;
                }
            }

        if(o==1)
            printf("%d\n",odd);
        else if(e==1)
            printf("%d\n",even);
    }


    return 0;

}


