/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);

int main()
{
    int n,f,t,k,joy,temp;

    while(scanf("%d%d",&n,&k)!=EOF)
    {
        scanf("%d%d",&f,&t);
        if(t>k)
            temp=f+k-t;
        else
            temp=f;
        joy=temp;
        n--;

        while(n--)
        {
            scanf("%d%d",&f,&t);
            if(t>k)
                temp=f+k-t;
            else
                temp=f;

            if(temp>joy)
                joy=temp;
        }

        printf("%d\n",joy);
    }

    return 0;

}



