/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);

int main()
{
    int n,i,stand,sit;
    char inp[2005];

    while(scanf("%d%s",&n,inp)!=EOF)
    {
        stand=0;
        sit=0;
        n=strlen(inp);

        for(i=0;i<n;i++)
        {
            if(inp[i]=='X')
                stand++;
            else if(inp[i]=='x')
                sit++;
        }
        if(stand>sit)
        {
            stand-=sit;
            stand/=2;
            sit=stand;

            for(i=0;i<n;i++)
            {
                if(inp[i]=='X')
                {
                    inp[i]='x';
                    stand--;
                }
                if(stand==0)
                    break;
            }

            printf("%d\n%s\n",sit,inp);
        }
        else if(stand<sit)
        {
            sit-=stand;
            sit/=2;
            stand=sit;

            for(i=0;i<n;i++)
            {
                if(inp[i]=='x')
                {
                    inp[i]='X';
                    sit--;
                }
                if(sit==0)
                    break;
            }

            printf("%d\n%s\n",stand,inp);
        }
        else
        {
            printf("%d\n%s\n",0,inp);
        }
    }

    return 0;

}
