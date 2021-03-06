/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define PI acos(-1.0)
#define MAX 1000005
#define MOD 1000000007
#define EPS 1e-9

vector <int> sieve(MAX,0);
vector <int> N;

int main ()
{
    int black,white,i,j;
    char board[10][10];

    while(scanf("%s",board[0])!=EOF)
    {
        for(i=1;i<8;i++)
            scanf("%s",board[i]);

        black=0;
        white=0;

        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                switch(board[i][j])
                {
                    case 'Q' : white+=9;
                               break;
                    case 'R' : white+=5;
                               break;
                    case 'B' : white+=3;
                               break;
                    case 'N' : white+=3;
                               break;
                    case 'P' : white+=1;
                               break;
                    case 'q' : black+=9;
                               break;
                    case 'r' : black+=5;
                               break;
                    case 'b' : black+=3;
                               break;
                    case 'n' : black+=3;
                               break;
                    case 'p' : black+=1;
                               break;
                }
            }
        }

        if(white>black)
            printf("White\n");
        else if(black>white)
            printf("Black\n");
        else
            printf("Draw\n");
    }

    return 0;

}

