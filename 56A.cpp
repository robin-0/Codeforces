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
    int cnt=0,i,n,num;
    char inp[MAX];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",inp);
        if((strcmp(inp,"WINE")==0)||(strcmp(inp,"GIN")==0)||(strcmp(inp,"RUM")==0)||(strcmp(inp,"SAKE")==0)||(strcmp(inp,"TEQUILA")==0)||(strcmp(inp,"VODKA")==0)||(strcmp(inp,"WHISKEY")==0)||(strcmp(inp,"BEER")==0)||(strcmp(inp,"BRANDY")==0)||(strcmp(inp,"CHAMPAGNE")==0)||(strcmp(inp,"ABSINTH")==0))
            cnt++;
        else
        {
            num=0;
            for(i=0;inp[i];i++)
            {
                if(inp[i]<='9'&&inp[i]>='0')
                {
                    num=(inp[i]-'0')+num*10;
                }
                else
                {
                    goto abar;
                }
            }
            if(num<18)
                cnt++;
        }

        abar:
            ;
    }
    printf("%d\n",cnt);



    return 0;
}

