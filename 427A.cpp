/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);

int main()
{
    int n,cop,event,inp;

    while(scanf("%d",&n)!=EOF)
    {
        cop=0;
        event=0;

        while(n--)
        {
            scanf("%d",&inp);
            if(inp>0)
                cop+=inp;
            if(inp==-1)
            {
                if(cop==0)
                    event++;
                else
                {
                    cop--;
                }
            }

        }

        printf("%d\n",event);
    }
    return 0;

}
