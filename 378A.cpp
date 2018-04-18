/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005



int main()
{
    int a,b,win,lose,draw,i;

    while(scanf("%d%d",&a, &b)!=EOF)
    {
        win=0;
        lose=0;
        draw=0;

        for(i=1;i<=6;i++)
        {
            if(abs(a-i)>abs(b-i))
                lose++;
            else if(abs(a-i)<abs(b-i))
                win++;
            else
                draw++;
        }

        printf("%d %d %d\n",win,draw,lose);
    }

    return 0;
}
