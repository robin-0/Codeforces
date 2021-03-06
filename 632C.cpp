/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>
#include <string>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 100000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define getInt(a) scanf("%d",&a);

bool isFirstSmaller ( string a , string b);

bool isFirstSmaller ( string a , string b)
{
    string c=a+b;
    string d=b+a;

    if(c<d)
        return true;
    else
        return false;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int N,i;
    vector <string> words;
    char inp[MAX];

    getInt(N);

    for(i=0;i<N;i++)
    {
        scanf("%s",inp);
        words.push_back(inp);
    }

    sort(words.begin(),words.end(),isFirstSmaller);

    for(i=0;i<N;i++)
        cout<<words[i];

    printf("\n");

    return 0;
}
