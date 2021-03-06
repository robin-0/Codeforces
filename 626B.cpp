/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9



int main ()
{
    int n,R,G,B,i,tempR,tempB,tempG,chkR,chkB,chkG;
    char inp[MAX];

    while(scanf("%d",&n)!=EOF)
    {
        scanf("%s",inp);

        R=0;
        G=0;
        B=0;
        chkR=0;
        chkG=0;
        chkB=0;

        for(i=0; i<n; i++)
        {
            if(inp[i]=='R')
                R++;
            else if(inp[i]=='G')
                G++;
            else if(inp[i]=='B')
                B++;
        }



        if(R>0 && G>0 && B>0)
        {
            chkB=1;
            chkR=1;
            chkG=1;
        }

        if((R>1&& B>1)||(R>1&& G>1)||(G>1&& B>1))
        {
            chkB=1;
            chkR=1;
            chkG=1;
        }

        if(R==0 && G==0 && B!=0)
        {
            chkB=1;
        }

        if(R==0 && B==0 && G!=0)
        {
            chkG=1;
        }

        if(B==0 && G==0 && R!=0)
        {
            chkR=1;
        }

        if(B==1 && G==1 && R==0)
        {
            chkR=1;
        }

        if(R==1 && G==1 && B==0)
        {
            chkB=1;
        }

        if(B==1 && R==1 && G==0)
        {
            chkG=1;
        }

        if(B==0 && R==1 && G>1)
        {
            chkR=1;
            chkB=1;
        }

        if(B==1 && R>1 && G==0)
        {
            chkG=1;
            chkB=1;
        }

        if(R==0 && G==1 && B>1)
        {
            chkR=1;
            chkG=1;
        }

        if(B==0 && R>1 && G==1)
        {
            chkG=1;
            chkB=1;
        }

        if(B>1 && R==1 && G==0)
        {
            chkG=1;
            chkR=1;
        }

        if(R==0 && G>1 && B==1)
        {
            chkR=1;
            chkB=1;
        }

        if(chkB)
            printf("B");
        if(chkG)
            printf("G");
        if(chkR)
            printf("R");

        printf("\n");
    }
    return 0;

}