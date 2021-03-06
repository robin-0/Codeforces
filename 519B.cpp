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

int main ()
{
    vector <int> A;
    vector <int> B;
    vector <int> C;

    int n,i,temp;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        A.push_back(temp);
    }

    sort(A.begin(),A.end());

    int m=n-1;

    for(i=0;i<m;i++)
    {
        scanf("%d",&temp);
        B.push_back(temp);
    }

    sort(B.begin(),B.end());

    temp=0;

    for(i=0;i<m;i++)
    {
        if(A[i]==B[i])
            continue;
        else
        {
            printf("%d\n",A[i]);
            temp=1;
            break;
        }
    }

    if(temp==0)
        printf("%d\n",A[n-1]);

    n=m;
    m=n-1;

    for(i=0;i<m;i++)
    {
        scanf("%d",&temp);
        C.push_back(temp);
    }

    sort(C.begin(),C.end());

    temp=0;

    for(i=0;i<m;i++)
    {
        if(C[i]==B[i])
            continue;
        else
        {
            printf("%d\n",B[i]);
            temp=1;
            break;
        }
    }

    if(temp==0)
        printf("%d\n",B[n-1]);

    return 0;

}

