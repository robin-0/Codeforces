/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005

void my_min(int n , int s);
void my_max(int n , int s);


int main()
{
    int n ,s ;

    while(scanf("%d%d",&n,&s)!=EOF)
    {
        if(n==1)
        {
            if(s<10)
                printf("%d %d\n",s,s);
            else
                printf("-1 -1\n");
        }
        else
        {
            my_min(n,s);
            my_max(n,s);
        }
        
    }


    return 0;
}

void my_min(int n , int s)
{

    int i,a;

    if(s==0||s>(n*9))
        printf("-1 ");

    else
    {
        for(i=1;i<10;i++)
        {
            if((s-i)<=abs((n-1)*9))
            {
                printf("%d",i);
                s-=i;
                n-=1;
                break;
            }
        }
        while(n>0)
        {
            for(i=0;i<10;i++)
            {
                if((s-i)<=abs((n-1)*9))
                {
                    printf("%d",i);
                    s-=i;
                    n-=1;
                    break;
                }
            }
        }
        printf(" ");
    }
}


void my_max(int n , int s)
{

    int i,a;

    if(s==0||s>(n*9))
        printf("-1\n");

    else
    {
        for(i=9;i>=0;i--)
        {
            if((s-i)>=0)
            {
                printf("%d",i);
                s-=i;
                n-=1;
                break;
            }
        }
        while(n>0)
        {
            for(i=9;i>=0;i--)
            {
                if((s-i)>=0)
                {
                    printf("%d",i);
                    s-=i;
                    n-=1;
                    break;
                }
            }
        }
        printf("\n");
    }
}
